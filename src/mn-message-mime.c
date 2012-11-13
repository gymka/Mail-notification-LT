/*
 * Mail Notification
 * Copyright (C) 2003-2008 Jean-Yves Lefort <jylefort@brutele.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <string.h>
#include <glib/gi18n.h>
#include <libgnomevfs/gnome-vfs.h>
#include "mn-message-mime.h"
#include "mn-gmime-stream-vfs.h"
#include "mn-util.h"
#include "mn-vfs.h"

static gboolean
is_spam (GMimeMessage *mime_message)
{
  const char *spam;

  g_return_val_if_fail(GMIME_IS_MESSAGE(mime_message), FALSE);

  /* SpamAssassin */
  spam = g_mime_message_get_header(mime_message, "X-Spam-Status");
  if (spam && mn_ascii_str_case_has_prefix(spam, "yes"))
    return TRUE;

  /* bogofilter */
  spam = g_mime_message_get_header(mime_message, "X-Bogosity");
  if (spam && mn_ascii_str_case_has_prefix(spam, "yes"))
    return TRUE;

  return FALSE;
}

MNMessage *
mn_message_new_from_mime_message (MNMailbox *mailbox,
				  GMimeMessage *mime_message,
				  const char *uri,
				  MNMessageFlags flags,
				  gboolean handle_status)
{
  return mn_message_new_from_mime_message_full(MN_TYPE_MESSAGE,
					       mailbox,
					       mime_message,
					       NULL,
					       uri,
					       flags,
					       handle_status);
}

MNMessage *
mn_message_new_from_mime_message_full (GType type,
				       MNMailbox *mailbox,
				       GMimeMessage *mime_message,
				       const char *mid,
				       const char *uri,
				       MNMessageFlags flags,
				       gboolean handle_status)
{
  MNMessage *message;
  const char *id;
  time_t sent_time;
  const char *from;
  const char *subject;
  char *decoded_from;
  char *decoded_subject;

  g_return_val_if_fail(type != 0, NULL);
  g_return_val_if_fail(MN_IS_MAILBOX(mailbox), NULL);
  g_return_val_if_fail(GMIME_IS_MESSAGE(mime_message), NULL);

  if (is_spam(mime_message))
    return NULL;

  if (handle_status)
    {
      const char *status;

      status = g_mime_message_get_header(mime_message, "Status");
      if (status && strchr(status, 'R'))
	return NULL;		/* the message was read */
      else if (status && strchr(status, 'O'))
	flags &= ~MN_MESSAGE_NEW;
      else
	flags |= MN_MESSAGE_NEW;
    }

  id = g_mime_message_get_message_id(mime_message);
  g_mime_message_get_date(mime_message, &sent_time, NULL);
  from = g_mime_message_get_sender(mime_message);
  subject = g_mime_message_get_subject(mime_message);

  decoded_from = from ? g_mime_utils_header_decode_text(from) : NULL;
  decoded_subject = subject ? g_mime_utils_header_decode_text(subject) : NULL;

  message = g_object_new(type,
			 MN_MESSAGE_PROP_MAILBOX(mailbox),
			 MN_MESSAGE_PROP_SENT_TIME(sent_time),
			 MN_MESSAGE_PROP_ID((char *) id),
			 MN_MESSAGE_PROP_MID((char *) mid),
			 MN_MESSAGE_PROP_FROM(decoded_from),
			 MN_MESSAGE_PROP_SUBJECT(decoded_subject),
			 MN_MESSAGE_PROP_URI((char *) uri),
			 MN_MESSAGE_PROP_FLAGS(flags),
			 NULL);

  g_free(decoded_from);
  g_free(decoded_subject);

  return message;
}

MNMessage *
mn_message_new_from_mime_stream (MNMailbox *mailbox,
				 GMimeStream *mime_stream,
				 const char *mid,
				 const char *uri,
				 MNMessageFlags flags,
				 gboolean handle_status,
				 GError **err)
{
  return mn_message_new_from_mime_stream_full(MN_TYPE_MESSAGE,
					      mailbox,
					      mime_stream,
					      mid,
					      uri,
					      flags,
					      handle_status,
					      err);
}

MNMessage *
mn_message_new_from_mime_stream_full (GType type,
				      MNMailbox *mailbox,
				      GMimeStream *mime_stream,
				      const char *mid,
				      const char *uri,
				      MNMessageFlags flags,
				      gboolean handle_status,
				      GError **err)
{
  GMimeParser *parser;
  GMimeMessage *mime_message;
  MNMessage *message = NULL;

  g_return_val_if_fail(type != 0, NULL);
  g_return_val_if_fail(MN_IS_MAILBOX(mailbox), NULL);
  g_return_val_if_fail(GMIME_IS_STREAM(mime_stream), NULL);

  parser = g_mime_parser_new_with_stream(mime_stream);
  mime_message = g_mime_parser_construct_message(parser);
  g_object_unref(parser);

  if (mime_message)
    {
      message = mn_message_new_from_mime_message_full(type, mailbox, mime_message, mid, uri, flags, handle_status);
      g_object_unref(mime_message);
    }
  else
    g_set_error(err, 0, 0, _("unable to parse MIME message"));

  return message;
}

MNMessage *
mn_message_new_from_uri (MNMailbox *mailbox,
			 GnomeVFSURI *uri,
			 MNMessageFlags flags,
			 gboolean handle_status,
			 GError **err)
{
  return mn_message_new_from_uri_full(MN_TYPE_MESSAGE,
				      mailbox,
				      NULL,
				      uri,
				      flags,
				      handle_status,
				      err);
}

MNMessage *
mn_message_new_from_uri_full (GType type,
			      MNMailbox *mailbox,
			      const char *mid,
			      GnomeVFSURI *uri,
			      MNMessageFlags flags,
			      gboolean handle_status,
			      GError **err)
{
  GnomeVFSResult result;
  GnomeVFSHandle *handle;

  g_return_val_if_fail(type != 0, NULL);
  g_return_val_if_fail(MN_IS_MAILBOX(mailbox), NULL);
  g_return_val_if_fail(uri != NULL, NULL);

  result = gnome_vfs_open_uri(&handle, uri, GNOME_VFS_OPEN_READ | GNOME_VFS_OPEN_RANDOM);
  if (result == GNOME_VFS_OK)
    {
      GMimeStream *stream;

      stream = mn_gmime_stream_vfs_new(handle, uri, &result);
      if (stream)
	{
	  MNMessage *message;
	  char *text_uri;

	  text_uri = gnome_vfs_uri_to_string(uri, GNOME_VFS_URI_HIDE_NONE);

	  message = mn_message_new_from_mime_stream_full(type,
							 mailbox,
							 stream,
							 mid,
							 text_uri,
							 flags,
							 handle_status,
							 err);

	  g_free(text_uri);
	  g_object_unref(stream);

	  return message;
	}
    }

  mn_vfs_result_to_g_error(result, err);
  return NULL;
}

MNMessage *
mn_message_new_from_buffer (MNMailbox *mailbox,
			    const char *buffer,
			    unsigned int len,
			    const char *mid,
			    MNMessageFlags flags,
			    gboolean handle_status,
			    GError **err)
{
  GMimeStream *stream;
  MNMessage *message;

  g_return_val_if_fail(MN_IS_MAILBOX(mailbox), NULL);
  g_return_val_if_fail(buffer != NULL, NULL);

  stream = g_mime_stream_mem_new_with_buffer(buffer, len);
  message = mn_message_new_from_mime_stream(mailbox,
					    stream,
					    mid,
					    NULL,
					    flags,
					    handle_status,
					    err);
  g_object_unref(stream);

  return message;
}
