/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-message.h"

#include "mn-message-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 76 "src/mn-message.gob"

#include <errno.h>
#include <glib/gi18n.h>
#include <gnome.h>
#include <libgnomevfs/gnome-vfs.h>
#include "mn-conf.h"
#include "mn-util.h"

typedef struct
{
  MNMessageActionRequest		*request;
  MNMessageActionPerformCallback	callback;
  gpointer				user_data;
} PerformInfo;

#line 42 "mn-message.c"
/* self casting macros */
#define SELF(x) MN_MESSAGE(x)
#define SELF_CONST(x) MN_MESSAGE_CONST(x)
#define IS_SELF(x) MN_IS_MESSAGE(x)
#define TYPE_SELF MN_TYPE_MESSAGE
#define SELF_CLASS(x) MN_MESSAGE_CLASS(x)

#define SELF_GET_CLASS(x) MN_MESSAGE_GET_CLASS(x)

/* self typedefs */
typedef MNMessage Self;
typedef MNMessageClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
#line 0 "src/mn-message.gob"
static void mn_message_init (MNMessage * o);
#line 61 "mn-message.c"
#line 0 "src/mn-message.gob"
static void mn_message_class_init (MNMessageClass * c);
#line 64 "mn-message.c"
#line 225 "src/mn-message.gob"
static void mn_message_constructor (MNMessage * self);
#line 67 "mn-message.c"
#line 267 "src/mn-message.gob"
static gboolean mn_message_subst_command_cb (const char * name, char ** value, gpointer data);
#line 70 "mn-message.c"
#line 297 "src/mn-message.gob"
static gboolean mn_message_execute_command_real (MNMessage * self, const char * command, GError ** err);
#line 73 "mn-message.c"
#line 325 "src/mn-message.gob"
static gboolean mn_message_execute_command (MNMessage * self, const char * id, GError ** err);
#line 76 "mn-message.c"
#line 394 "src/mn-message.gob"
static void mn_message_perform_action_in_thread_cb (PerformInfo * info);
#line 79 "mn-message.c"
#line 412 "src/mn-message.gob"
static void mn_message_action_done_real (MNMessage * self, MNMessageAction * action, GError * err, MNMessageActionResultCallback callback, gpointer data);
#line 82 "mn-message.c"
static gboolean ___real_mn_message_builtin_can_open (MNMessage * self);
#line 440 "src/mn-message.gob"
static gboolean mn_message_builtin_can_open (MNMessage * self);
#line 86 "mn-message.c"
static void ___real_mn_message_builtin_open (MNMessage * self, MNMessageActionRequest * request);
#line 446 "src/mn-message.gob"
static void mn_message_builtin_open (MNMessage * self, MNMessageActionRequest * request);
#line 90 "mn-message.c"
#line 456 "src/mn-message.gob"
static void mn_message_open_done (MNMessage * self, GError * err);
#line 93 "mn-message.c"
static gboolean ___real_mn_message_builtin_can_mark_as_read (MNMessage * self);
#line 463 "src/mn-message.gob"
static gboolean mn_message_builtin_can_mark_as_read (MNMessage * self);
#line 97 "mn-message.c"
#line 469 "src/mn-message.gob"
static void mn_message_builtin_mark_as_read (MNMessage * self, MNMessageActionRequest * request);
#line 100 "mn-message.c"
#line 472 "src/mn-message.gob"
static void mn_message_mark_as_read_done (MNMessage * self, GError * err);
#line 103 "mn-message.c"
static gboolean ___real_mn_message_builtin_can_mark_as_spam (MNMessage * self);
#line 479 "src/mn-message.gob"
static gboolean mn_message_builtin_can_mark_as_spam (MNMessage * self);
#line 107 "mn-message.c"
#line 485 "src/mn-message.gob"
static void mn_message_builtin_mark_as_spam (MNMessage * self, MNMessageActionRequest * request);
#line 110 "mn-message.c"
#line 488 "src/mn-message.gob"
static void mn_message_mark_as_spam_done (MNMessage * self, GError * err);
#line 113 "mn-message.c"
static gboolean ___real_mn_message_builtin_can_delete (MNMessage * self);
#line 495 "src/mn-message.gob"
static gboolean mn_message_builtin_can_delete (MNMessage * self);
#line 117 "mn-message.c"
#line 501 "src/mn-message.gob"
static void mn_message_builtin_delete (MNMessage * self, MNMessageActionRequest * request);
#line 120 "mn-message.c"
#line 504 "src/mn-message.gob"
static void mn_message_delete_done (MNMessage * self, GError * err);
#line 123 "mn-message.c"

enum {
	PROP_0,
	PROP_MAILBOX,
	PROP_SENT_TIME,
	PROP_ID,
	PROP_MID,
	PROP_FROM,
	PROP_SUBJECT,
	PROP_URI,
	PROP_FILENAME,
	PROP_FLAGS
};

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_get_action mn_message_get_action
#define self_subst_command_cb mn_message_subst_command_cb
#define self_execute_command_real mn_message_execute_command_real
#define self_execute_command mn_message_execute_command
#define self_can_perform_action mn_message_can_perform_action
#define self_perform_action mn_message_perform_action
#define self_perform_action_in_thread mn_message_perform_action_in_thread
#define self_perform_action_in_thread_cb mn_message_perform_action_in_thread_cb
#define self_action_done_real mn_message_action_done_real
#define self_action_done mn_message_action_done
#define self_action_error_quark mn_message_action_error_quark
#define self_builtin_can_open mn_message_builtin_can_open
#define self_builtin_open mn_message_builtin_open
#define self_open_done mn_message_open_done
#define self_builtin_can_mark_as_read mn_message_builtin_can_mark_as_read
#define self_builtin_mark_as_read mn_message_builtin_mark_as_read
#define self_mark_as_read_done mn_message_mark_as_read_done
#define self_builtin_can_mark_as_spam mn_message_builtin_can_mark_as_spam
#define self_builtin_mark_as_spam mn_message_builtin_mark_as_spam
#define self_mark_as_spam_done mn_message_mark_as_spam_done
#define self_builtin_can_delete mn_message_builtin_can_delete
#define self_builtin_delete mn_message_builtin_delete
#define self_delete_done mn_message_delete_done
#define self_consider_as_read mn_message_consider_as_read
#define self_consider_as_read_list mn_message_consider_as_read_list
#define self_new mn_message_new
#define self_xml_node_new mn_message_xml_node_new
GType
mn_message_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNMessageClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_message_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNMessage),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_message_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "MNMessage", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNMessage *)g_object_new(mn_message_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNMessage * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNMessage *
GET_NEW_VARG (const char *first, ...)
{
	MNMessage *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNMessage *)g_object_new_valist (mn_message_get_type (), first, ap);
	va_end (ap);
	return ret;
}


#line 92 "src/mn-message.gob"

static const MNMessageAction message_actions[] = {
  {
    "open",
    "mail-open",
    /* translators: header capitalization */
    N_("Open"),
    N_("Unable to open message"),
    self_builtin_can_open,
    self_builtin_open,
    self_open_done
  },
  {
    "mark-as-read",
    "mark",
    /* translators: header capitalization */
    N_("Mark as Read"),
    N_("Unable to mark message as read"),
    self_builtin_can_mark_as_read,
    self_builtin_mark_as_read,
    self_mark_as_read_done
  },
  {
    "mark-as-spam",
    "spam",
    /* translators: header capitalization */
    N_("Mark as Spam"),
    N_("Unable to mark message as spam"),
    self_builtin_can_mark_as_spam,
    self_builtin_mark_as_spam,
    self_mark_as_spam_done
  },
  {
    "delete",
    "delete",
    /* translators: header capitalization */
    N_("Delete"),
    N_("Unable to mark message as spam"),
    self_builtin_can_delete,
    self_builtin_delete,
    self_delete_done
  }
};

#line 257 "mn-message.c"

static GObject *
___constructor (GType type, guint n_construct_properties, GObjectConstructParam *construct_properties)
{
#define __GOB_FUNCTION__ "MN:Message::constructor"
	GObject *obj_self;
	MNMessage *self;
	obj_self = G_OBJECT_CLASS (parent_class)->constructor (type, n_construct_properties, construct_properties);
	self = MN_MESSAGE (obj_self);
#line 225 "src/mn-message.gob"
	mn_message_constructor (self);
#line 269 "mn-message.c"
	return obj_self;
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Message::finalize"
	MNMessage *self G_GNUC_UNUSED = MN_MESSAGE (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 164 "src/mn-message.gob"
	if(self->id) { g_free ((gpointer) self->id); self->id = NULL; }
#line 284 "mn-message.c"
#line 179 "src/mn-message.gob"
	if(self->mid) { g_free ((gpointer) self->mid); self->mid = NULL; }
#line 287 "mn-message.c"
#line 183 "src/mn-message.gob"
	if(self->from) { g_free ((gpointer) self->from); self->from = NULL; }
#line 290 "mn-message.c"
#line 187 "src/mn-message.gob"
	if(self->subject) { g_free ((gpointer) self->subject); self->subject = NULL; }
#line 293 "mn-message.c"
#line 191 "src/mn-message.gob"
	if(self->uri) { g_free ((gpointer) self->uri); self->uri = NULL; }
#line 296 "mn-message.c"
}
#undef __GOB_FUNCTION__

static void 
mn_message_init (MNMessage * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Message::init"
}
#undef __GOB_FUNCTION__
static void 
mn_message_class_init (MNMessageClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Message::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

#line 440 "src/mn-message.gob"
	c->builtin_can_open = ___real_mn_message_builtin_can_open;
#line 446 "src/mn-message.gob"
	c->builtin_open = ___real_mn_message_builtin_open;
#line 463 "src/mn-message.gob"
	c->builtin_can_mark_as_read = ___real_mn_message_builtin_can_mark_as_read;
#line 320 "mn-message.c"
	c->builtin_mark_as_read = NULL;
#line 479 "src/mn-message.gob"
	c->builtin_can_mark_as_spam = ___real_mn_message_builtin_can_mark_as_spam;
#line 324 "mn-message.c"
	c->builtin_mark_as_spam = NULL;
#line 495 "src/mn-message.gob"
	c->builtin_can_delete = ___real_mn_message_builtin_can_delete;
#line 328 "mn-message.c"
	c->builtin_delete = NULL;
	g_object_class->constructor = ___constructor;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_pointer
		("mailbox" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_MAILBOX,
		param_spec);
	param_spec = g_param_spec_ulong
		("sent_time" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 0 /* minimum */,
		 G_MAXULONG /* maximum */,
		 0 /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | MN_MESSAGE_PARAM_EXPORT | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_SENT_TIME,
		param_spec);
	param_spec = g_param_spec_string
		("id" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | MN_MESSAGE_PARAM_EXPORT | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_ID,
		param_spec);
	param_spec = g_param_spec_string
		("mid" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_MID,
		param_spec);
	param_spec = g_param_spec_string
		("from" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | MN_MESSAGE_PARAM_EXPORT | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_FROM,
		param_spec);
	param_spec = g_param_spec_string
		("subject" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | MN_MESSAGE_PARAM_EXPORT | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_SUBJECT,
		param_spec);
	param_spec = g_param_spec_string
		("uri" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | MN_MESSAGE_PARAM_EXPORT | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_URI,
		param_spec);
	param_spec = g_param_spec_string
		("filename" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | MN_MESSAGE_PARAM_EXPORT));
	g_object_class_install_property (g_object_class,
		PROP_FILENAME,
		param_spec);
	param_spec = g_param_spec_uint
		("flags" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 0 /* minimum */,
		 G_MAXUINT /* maximum */,
		 0 /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_FLAGS,
		param_spec);
    }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Message::set_property"
{
	MNMessage *self G_GNUC_UNUSED;

	self = MN_MESSAGE (object);

	switch (property_id) {
	case PROP_MAILBOX:
		{
#line 147 "src/mn-message.gob"
self->mailbox = g_value_get_pointer (VAL);
#line 441 "mn-message.c"
		}
		break;
	case PROP_SENT_TIME:
		{
#line 151 "src/mn-message.gob"
self->sent_time = g_value_get_ulong (VAL);
#line 448 "mn-message.c"
		}
		break;
	case PROP_ID:
		{
#line 165 "src/mn-message.gob"
{ char *old = self->id; self->id = g_value_dup_string (VAL); g_free (old); }
#line 455 "mn-message.c"
		}
		break;
	case PROP_MID:
		{
#line 180 "src/mn-message.gob"
{ char *old = self->mid; self->mid = g_value_dup_string (VAL); g_free (old); }
#line 462 "mn-message.c"
		}
		break;
	case PROP_FROM:
		{
#line 184 "src/mn-message.gob"
{ char *old = self->from; self->from = g_value_dup_string (VAL); g_free (old); }
#line 469 "mn-message.c"
		}
		break;
	case PROP_SUBJECT:
		{
#line 188 "src/mn-message.gob"
{ char *old = self->subject; self->subject = g_value_dup_string (VAL); g_free (old); }
#line 476 "mn-message.c"
		}
		break;
	case PROP_URI:
		{
#line 192 "src/mn-message.gob"
{ char *old = self->uri; self->uri = g_value_dup_string (VAL); g_free (old); }
#line 483 "mn-message.c"
		}
		break;
	case PROP_FLAGS:
		{
#line 201 "src/mn-message.gob"
self->flags = g_value_get_uint (VAL);
#line 490 "mn-message.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Message::get_property"
{
	MNMessage *self G_GNUC_UNUSED;

	self = MN_MESSAGE (object);

	switch (property_id) {
	case PROP_MAILBOX:
		{
#line 147 "src/mn-message.gob"
g_value_set_pointer (VAL, self->mailbox);
#line 521 "mn-message.c"
		}
		break;
	case PROP_SENT_TIME:
		{
#line 151 "src/mn-message.gob"
g_value_set_ulong (VAL, self->sent_time);
#line 528 "mn-message.c"
		}
		break;
	case PROP_ID:
		{
#line 165 "src/mn-message.gob"
g_value_set_string (VAL, self->id);
#line 535 "mn-message.c"
		}
		break;
	case PROP_MID:
		{
#line 180 "src/mn-message.gob"
g_value_set_string (VAL, self->mid);
#line 542 "mn-message.c"
		}
		break;
	case PROP_FROM:
		{
#line 184 "src/mn-message.gob"
g_value_set_string (VAL, self->from);
#line 549 "mn-message.c"
		}
		break;
	case PROP_SUBJECT:
		{
#line 188 "src/mn-message.gob"
g_value_set_string (VAL, self->subject);
#line 556 "mn-message.c"
		}
		break;
	case PROP_URI:
		{
#line 192 "src/mn-message.gob"
g_value_set_string (VAL, self->uri);
#line 563 "mn-message.c"
		}
		break;
	case PROP_FILENAME:
		{
#line 196 "src/mn-message.gob"

      g_value_take_string(VAL, self->uri ? gnome_vfs_get_local_path_from_uri(self->uri) : NULL);
    
#line 572 "mn-message.c"
		}
		break;
	case PROP_FLAGS:
		{
#line 201 "src/mn-message.gob"
g_value_set_uint (VAL, self->flags);
#line 579 "mn-message.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__



#line 203 "src/mn-message.gob"
MNMessageAction * 
mn_message_get_action (const char * name)
{
#line 600 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::get_action"
#line 203 "src/mn-message.gob"
	g_return_val_if_fail (name != NULL, (MNMessageAction * )0);
#line 604 "mn-message.c"
{
#line 205 "src/mn-message.gob"
	
    static GHashTable *actions = NULL;

    if (! actions)
      {
	int i;

	actions = g_hash_table_new(g_str_hash, g_str_equal);

	for (i = 0; i < G_N_ELEMENTS(message_actions); i++)
	  {
	    const MNMessageAction *action = &message_actions[i];

	    g_hash_table_insert(actions, (gpointer) action->name, (gpointer) action);
	  }
      }

    return g_hash_table_lookup(actions, name);
  }}
#line 626 "mn-message.c"
#undef __GOB_FUNCTION__

#line 225 "src/mn-message.gob"
static void 
mn_message_constructor (MNMessage * self)
{
#line 633 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::constructor"
{
#line 226 "src/mn-message.gob"
	
    g_assert(MN_IS_MAILBOX(self->mailbox));

    if (! self->id)
      {
	GString *id;

	/* no ID was provided, try to generate a persistent one */

	id = g_string_new(NULL);

	if (self->sent_time > 0)
	  g_string_append_printf(id, ":sent-time:%i:", (int) self->sent_time);
	if (self->from)
	  g_string_append_printf(id, ":from:%s:", self->from);
	if (self->subject)
	  g_string_append_printf(id, ":subject:%s:", self->subject);

	if (! *id->str)
	  {
	    static int unique = 0;

	    /*
	     * We could not generate a persistent ID. Fallback to a
	     * non-persistent one.
	     */

	    g_string_append_printf(id, "%i", g_atomic_int_exchange_and_add(&unique, 1));
	  }

	self->id = g_string_free(id, FALSE);
      }

    /* these fields must only be filled after we have generated an ID */

    if (! self->from)
      self->from = g_strdup("");
    if (! self->subject)
      self->subject = g_strdup("");
  }}
#line 677 "mn-message.c"
#undef __GOB_FUNCTION__

#line 267 "src/mn-message.gob"
static gboolean 
mn_message_subst_command_cb (const char * name, char ** value, gpointer data)
{
#line 684 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::subst_command_cb"
{
#line 269 "src/mn-message.gob"
	
    Self *self = data;
    GParamSpec **properties;
    unsigned int n_properties;
    gboolean status = FALSE;
    int i;

    properties = g_object_class_list_properties(G_OBJECT_GET_CLASS(self), &n_properties);
    for (i = 0; i < n_properties; i++)
      if ((properties[i]->flags & MN_MESSAGE_PARAM_EXPORT) != 0
	  && ! strcmp(g_param_spec_get_name(properties[i]), name))
	{
	  GValue gvalue = { 0, };

	  g_value_init(&gvalue, G_PARAM_SPEC_VALUE_TYPE(properties[i]));
	  g_object_get_property(G_OBJECT(self), name, &gvalue);

	  *value = mn_g_value_to_string(&gvalue);
	  g_value_unset(&gvalue);

	  status = TRUE;
	  break;
	}
    g_free(properties);

    return status;
  }}
#line 715 "mn-message.c"
#undef __GOB_FUNCTION__

#line 297 "src/mn-message.gob"
static gboolean 
mn_message_execute_command_real (MNMessage * self, const char * command, GError ** err)
{
#line 722 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::execute_command_real"
#line 297 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 297 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 297 "src/mn-message.gob"
	g_return_val_if_fail (command != NULL, (gboolean )0);
#line 730 "mn-message.c"
{
#line 301 "src/mn-message.gob"
	
    char *subst;
    int status;

    subst = mn_subst_command(command, self_subst_command_cb, self, err);
    if (! subst)
      return FALSE;

    status = gnome_execute_shell(NULL, subst);
    g_free(subst);

    if (status < 0)
      {
	g_set_error(err, 0, 0, "%s", g_strerror(errno));
	return FALSE;
      }

    return TRUE;
  }}
#line 752 "mn-message.c"
#undef __GOB_FUNCTION__

#line 325 "src/mn-message.gob"
static gboolean 
mn_message_execute_command (MNMessage * self, const char * id, GError ** err)
{
#line 759 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::execute_command"
#line 325 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 325 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 325 "src/mn-message.gob"
	g_return_val_if_fail (id != NULL, (gboolean )0);
#line 767 "mn-message.c"
{
#line 327 "src/mn-message.gob"
	
    char *command;
    GError *tmp_err = NULL;

    command = mn_mailbox_get_command(self->mailbox, id);
    if (! command)
      return FALSE;

    if (! self_execute_command_real(self, command, &tmp_err))
      {
	g_set_error(err, 0, 0, _("Unable to execute \"%s\": %s."), command, tmp_err->message);
	g_error_free(tmp_err);
      }

    g_free(command);
    return TRUE;
  }}
#line 787 "mn-message.c"
#undef __GOB_FUNCTION__

#line 345 "src/mn-message.gob"
gboolean 
mn_message_can_perform_action (MNMessage * self, MNMessageAction * action)
{
#line 794 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::can_perform_action"
#line 345 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 345 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 345 "src/mn-message.gob"
	g_return_val_if_fail (action != NULL, (gboolean )0);
#line 802 "mn-message.c"
{
#line 347 "src/mn-message.gob"
	
    return mn_mailbox_has_command(self->mailbox, action->name)
      || action->can_perform(self);
  }}
#line 809 "mn-message.c"
#undef __GOB_FUNCTION__

#line 352 "src/mn-message.gob"
void 
mn_message_perform_action (MNMessage * self, MNMessageAction * action, MNMessageActionResultCallback callback, gpointer data)
{
#line 816 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::perform_action"
#line 352 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 352 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 352 "src/mn-message.gob"
	g_return_if_fail (action != NULL);
#line 352 "src/mn-message.gob"
	g_return_if_fail (callback != NULL);
#line 826 "mn-message.c"
{
#line 357 "src/mn-message.gob"
	
    GError *err = NULL;

    if (self_execute_command(self, action->name, &err))
      self_action_done_real(self, action, err, callback, data);
    else
      {
	MNMessageActionRequest *request;

	request = g_new0(MNMessageActionRequest, 1);
	request->message = g_object_ref(self);
	request->action = action;
	request->callback = callback;
	request->data = data;

	action->perform(self, request);
      }
  }}
#line 847 "mn-message.c"
#undef __GOB_FUNCTION__

#line 376 "src/mn-message.gob"
void 
mn_message_perform_action_in_thread (MNMessageActionRequest * request, MNMessageActionPerformCallback callback, gpointer user_data)
{
#line 854 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::perform_action_in_thread"
#line 376 "src/mn-message.gob"
	g_return_if_fail (request != NULL);
#line 376 "src/mn-message.gob"
	g_return_if_fail (callback != NULL);
#line 860 "mn-message.c"
{
#line 380 "src/mn-message.gob"
	
    PerformInfo *info;

    info = g_new0(PerformInfo, 1);
    info->request = request;
    info->callback = callback;
    info->user_data = user_data;

    g_object_ref(request->message);
    g_object_ref(request->message->mailbox);

    mn_thread_create((GThreadFunc) self_perform_action_in_thread_cb, info);
  }}
#line 876 "mn-message.c"
#undef __GOB_FUNCTION__

#line 394 "src/mn-message.gob"
static void 
mn_message_perform_action_in_thread_cb (PerformInfo * info)
{
#line 883 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::perform_action_in_thread_cb"
{
#line 396 "src/mn-message.gob"
	
    GError *err;

    err = info->callback(info->request->message, info->user_data);

    GDK_THREADS_ENTER();

    self_action_done(info->request, err);

    g_object_unref(info->request->message->mailbox);
    g_object_unref(info->request->message);

    gdk_flush();
    GDK_THREADS_LEAVE();
  }}
#line 902 "mn-message.c"
#undef __GOB_FUNCTION__

#line 412 "src/mn-message.gob"
static void 
mn_message_action_done_real (MNMessage * self, MNMessageAction * action, GError * err, MNMessageActionResultCallback callback, gpointer data)
{
#line 909 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::action_done_real"
#line 412 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 412 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 412 "src/mn-message.gob"
	g_return_if_fail (action != NULL);
#line 917 "mn-message.c"
{
#line 418 "src/mn-message.gob"
	
    action->done(self, err);
    callback(action, err, data);
  }}
#line 924 "mn-message.c"
#undef __GOB_FUNCTION__

#line 423 "src/mn-message.gob"
void 
mn_message_action_done (MNMessageActionRequest * request, GError * err)
{
#line 931 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::action_done"
#line 423 "src/mn-message.gob"
	g_return_if_fail (request != NULL);
#line 935 "mn-message.c"
{
#line 425 "src/mn-message.gob"
	
    Self *self = request->message;

    self_action_done_real(self, request->action, err, request->callback, request->data);

    g_object_unref(request->message);
    g_free(request);
  }}
#line 946 "mn-message.c"
#undef __GOB_FUNCTION__

#line 434 "src/mn-message.gob"
GQuark 
mn_message_action_error_quark (void)
{
#line 953 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::action_error_quark"
{
#line 436 "src/mn-message.gob"
	
    return g_quark_from_static_string("mn-message-action-error");
  }}
#line 960 "mn-message.c"
#undef __GOB_FUNCTION__

#line 440 "src/mn-message.gob"
static gboolean 
mn_message_builtin_can_open (MNMessage * self)
{
#line 967 "mn-message.c"
	MNMessageClass *klass;
#line 440 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 440 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 973 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_can_open)
		return (*klass->builtin_can_open)(self);
	else
		return (gboolean )(0);
}
#line 440 "src/mn-message.gob"
static gboolean 
___real_mn_message_builtin_can_open (MNMessage * self G_GNUC_UNUSED)
{
#line 985 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::builtin_can_open"
{
#line 442 "src/mn-message.gob"
	
    return self->uri != NULL;
  }}
#line 992 "mn-message.c"
#undef __GOB_FUNCTION__

#line 446 "src/mn-message.gob"
static void 
mn_message_builtin_open (MNMessage * self, MNMessageActionRequest * request)
{
#line 999 "mn-message.c"
	MNMessageClass *klass;
#line 446 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 446 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1005 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_open)
		(*klass->builtin_open)(self,request);
}
#line 446 "src/mn-message.gob"
static void 
___real_mn_message_builtin_open (MNMessage * self G_GNUC_UNUSED, MNMessageActionRequest * request)
{
#line 1015 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::builtin_open"
{
#line 448 "src/mn-message.gob"
	
    GError *err = NULL;

    gnome_url_show(self->uri, &err);

    self_action_done(request, err);
  }}
#line 1026 "mn-message.c"
#undef __GOB_FUNCTION__

#line 456 "src/mn-message.gob"
static void 
mn_message_open_done (MNMessage * self, GError * err)
{
#line 1033 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::open_done"
#line 456 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 456 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1039 "mn-message.c"
{
#line 458 "src/mn-message.gob"
	
    if (! err)
      self_consider_as_read(self); /* [1] */
  }}
#line 1046 "mn-message.c"
#undef __GOB_FUNCTION__

#line 463 "src/mn-message.gob"
static gboolean 
mn_message_builtin_can_mark_as_read (MNMessage * self)
{
#line 1053 "mn-message.c"
	MNMessageClass *klass;
#line 463 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 463 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 1059 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_can_mark_as_read)
		return (*klass->builtin_can_mark_as_read)(self);
	else
		return (gboolean )(0);
}
#line 463 "src/mn-message.gob"
static gboolean 
___real_mn_message_builtin_can_mark_as_read (MNMessage * self G_GNUC_UNUSED)
{
#line 1071 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::builtin_can_mark_as_read"
{
#line 465 "src/mn-message.gob"
	
    return SELF_GET_CLASS(self)->builtin_mark_as_read != NULL;
  }}
#line 1078 "mn-message.c"
#undef __GOB_FUNCTION__

#line 469 "src/mn-message.gob"
static void 
mn_message_builtin_mark_as_read (MNMessage * self, MNMessageActionRequest * request)
{
#line 1085 "mn-message.c"
	MNMessageClass *klass;
#line 469 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 469 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1091 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_mark_as_read)
		(*klass->builtin_mark_as_read)(self,request);
}

#line 472 "src/mn-message.gob"
static void 
mn_message_mark_as_read_done (MNMessage * self, GError * err)
{
#line 1102 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::mark_as_read_done"
#line 472 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 472 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1108 "mn-message.c"
{
#line 474 "src/mn-message.gob"
	
    if (! err)
      self_consider_as_read(self); /* [1] */
  }}
#line 1115 "mn-message.c"
#undef __GOB_FUNCTION__

#line 479 "src/mn-message.gob"
static gboolean 
mn_message_builtin_can_mark_as_spam (MNMessage * self)
{
#line 1122 "mn-message.c"
	MNMessageClass *klass;
#line 479 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 479 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 1128 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_can_mark_as_spam)
		return (*klass->builtin_can_mark_as_spam)(self);
	else
		return (gboolean )(0);
}
#line 479 "src/mn-message.gob"
static gboolean 
___real_mn_message_builtin_can_mark_as_spam (MNMessage * self G_GNUC_UNUSED)
{
#line 1140 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::builtin_can_mark_as_spam"
{
#line 481 "src/mn-message.gob"
	
    return SELF_GET_CLASS(self)->builtin_mark_as_spam != NULL;
  }}
#line 1147 "mn-message.c"
#undef __GOB_FUNCTION__

#line 485 "src/mn-message.gob"
static void 
mn_message_builtin_mark_as_spam (MNMessage * self, MNMessageActionRequest * request)
{
#line 1154 "mn-message.c"
	MNMessageClass *klass;
#line 485 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 485 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1160 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_mark_as_spam)
		(*klass->builtin_mark_as_spam)(self,request);
}

#line 488 "src/mn-message.gob"
static void 
mn_message_mark_as_spam_done (MNMessage * self, GError * err)
{
#line 1171 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::mark_as_spam_done"
#line 488 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 488 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1177 "mn-message.c"
{
#line 490 "src/mn-message.gob"
	
    if (! err)
      self_consider_as_read(self); /* [1] */
  }}
#line 1184 "mn-message.c"
#undef __GOB_FUNCTION__

#line 495 "src/mn-message.gob"
static gboolean 
mn_message_builtin_can_delete (MNMessage * self)
{
#line 1191 "mn-message.c"
	MNMessageClass *klass;
#line 495 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 495 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (gboolean )0);
#line 1197 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_can_delete)
		return (*klass->builtin_can_delete)(self);
	else
		return (gboolean )(0);
}
#line 495 "src/mn-message.gob"
static gboolean 
___real_mn_message_builtin_can_delete (MNMessage * self G_GNUC_UNUSED)
{
#line 1209 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::builtin_can_delete"
{
#line 497 "src/mn-message.gob"
	
    return SELF_GET_CLASS(self)->builtin_delete != NULL;
  }}
#line 1216 "mn-message.c"
#undef __GOB_FUNCTION__

#line 501 "src/mn-message.gob"
static void 
mn_message_builtin_delete (MNMessage * self, MNMessageActionRequest * request)
{
#line 1223 "mn-message.c"
	MNMessageClass *klass;
#line 501 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 501 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1229 "mn-message.c"
	klass = MN_MESSAGE_GET_CLASS(self);

	if(klass->builtin_delete)
		(*klass->builtin_delete)(self,request);
}

#line 504 "src/mn-message.gob"
static void 
mn_message_delete_done (MNMessage * self, GError * err)
{
#line 1240 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::delete_done"
#line 504 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 504 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1246 "mn-message.c"
{
#line 506 "src/mn-message.gob"
	
    if (! err)
      self_consider_as_read(self); /* [1] */
  }}
#line 1253 "mn-message.c"
#undef __GOB_FUNCTION__

#line 511 "src/mn-message.gob"
void 
mn_message_consider_as_read (MNMessage * self)
{
#line 1260 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::consider_as_read"
#line 511 "src/mn-message.gob"
	g_return_if_fail (self != NULL);
#line 511 "src/mn-message.gob"
	g_return_if_fail (MN_IS_MESSAGE (self));
#line 1266 "mn-message.c"
{
#line 513 "src/mn-message.gob"
	
    GSList *list;
    GSList *l;
    gboolean exists = FALSE;

    list = mn_conf_get_string_list(MN_CONF_MESSAGES_CONSIDERED_AS_READ);

    MN_LIST_FOREACH(l, list)
      {
	const char *id = l->data;

	if (! strcmp(id, self->id))
	  {
	    exists = TRUE;
	    break;
	  }
      }

    if (! exists)
      {
	list = g_slist_prepend(list, g_strdup(self->id));

	mn_conf_set_string_list(MN_CONF_MESSAGES_CONSIDERED_AS_READ, list);
      }

    mn_g_slist_free_deep(list);
  }}
#line 1296 "mn-message.c"
#undef __GOB_FUNCTION__

#line 545 "src/mn-message.gob"
void 
mn_message_consider_as_read_list (GList * messages)
{
#line 1303 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::consider_as_read_list"
{
#line 547 "src/mn-message.gob"
	
    GHashTable *set;
    unsigned int old_size;
    GList *l;

    set = mn_conf_get_string_hash_set(MN_CONF_MESSAGES_CONSIDERED_AS_READ);

    old_size = g_hash_table_size(set);

    MN_LIST_FOREACH(l, messages)
      {
	MNMessage *message = l->data;

	g_hash_table_replace(set, g_strdup(message->id), GINT_TO_POINTER(TRUE));
      }

    if (g_hash_table_size(set) != old_size)
      mn_conf_set_string_hash_set(MN_CONF_MESSAGES_CONSIDERED_AS_READ, set);

    g_hash_table_destroy(set);
  }}
#line 1328 "mn-message.c"
#undef __GOB_FUNCTION__

#line 569 "src/mn-message.gob"
MNMessage * 
mn_message_new (MNMailbox * mailbox, time_t sent_time, const char * id, const char * mid, const char * from, const char * subject, const char * uri, MNMessageFlags flags)
{
#line 1335 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::new"
#line 569 "src/mn-message.gob"
	g_return_val_if_fail (mailbox != NULL, (MNMessage * )0);
#line 569 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MAILBOX (mailbox), (MNMessage * )0);
#line 1341 "mn-message.c"
{
#line 578 "src/mn-message.gob"
	
    return GET_NEW_VARG(MN_MESSAGE_PROP_MAILBOX(mailbox),
			MN_MESSAGE_PROP_SENT_TIME(sent_time),
			MN_MESSAGE_PROP_ID((char *) id),
			MN_MESSAGE_PROP_MID((char *) mid),
			MN_MESSAGE_PROP_FROM((char *) from),
			MN_MESSAGE_PROP_SUBJECT((char *) subject),
			MN_MESSAGE_PROP_URI((char *) uri),
			MN_MESSAGE_PROP_FLAGS(flags),
			NULL);
  }}
#line 1355 "mn-message.c"
#undef __GOB_FUNCTION__

#line 590 "src/mn-message.gob"
xmlNode * 
mn_message_xml_node_new (MNMessage * self)
{
#line 1362 "mn-message.c"
#define __GOB_FUNCTION__ "MN:Message::xml_node_new"
#line 590 "src/mn-message.gob"
	g_return_val_if_fail (self != NULL, (xmlNode * )0);
#line 590 "src/mn-message.gob"
	g_return_val_if_fail (MN_IS_MESSAGE (self), (xmlNode * )0);
#line 1368 "mn-message.c"
{
#line 592 "src/mn-message.gob"
	
    xmlNode *node;

    node = xmlNewNode(NULL, "message");

    xmlSetProp(node, "mailbox", self->mailbox->runtime_name);

    if ((self->flags & MN_MESSAGE_NEW) != 0)
      xmlSetProp(node, "new", "true");

    mn_xml_export_properties(G_OBJECT(self), node);

    return node;
  }}
#line 1385 "mn-message.c"
#undef __GOB_FUNCTION__
