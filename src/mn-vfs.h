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

#ifndef _MN_VFS_H
#define _MN_VFS_H

#include <glib.h>
#include <libgnomevfs/gnome-vfs.h>

typedef struct _MNVFSReadLineContext MNVFSReadLineContext;

GnomeVFSResult mn_vfs_read_line (MNVFSReadLineContext **context,
				 GnomeVFSHandle *handle,
				 const char **line);
void mn_vfs_read_line_context_free (MNVFSReadLineContext *context);

gboolean mn_vfs_test (GnomeVFSURI *uri, GFileTest test);

GnomeVFSResult mn_vfs_read_entire_file_uri (GnomeVFSURI *uri,
					    int *file_size,
					    char **file_contents);
GnomeVFSResult mn_vfs_write_entire_file_uri (GnomeVFSURI *uri,
					     gsize file_size,
					     const char *file_contents,
					     gboolean exclusive,
					     unsigned int perms);
gboolean mn_vfs_write_entire_file_uri_safe (GnomeVFSURI *uri,
					    gsize file_size,
					    const char *file_contents,
					    unsigned int perms,
					    GError **err);

GnomeVFSURI *mn_vfs_uri_append_file_suffix (GnomeVFSURI *uri,
					    const char *suffix);

char *mn_vfs_uri_extract_short_name (const char *text_uri);

char *mn_vfs_get_local_path (GnomeVFSURI *uri);

gboolean mn_vfs_result_to_g_error (GnomeVFSResult result, GError **err);

#endif /* _MN_VFS_H */
