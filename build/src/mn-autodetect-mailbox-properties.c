/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-autodetect-mailbox-properties.h"

#include "mn-autodetect-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 25 "src/mn-autodetect-mailbox-properties.gob"

#include <glib/gi18n.h>
#include "mn-mailbox-properties.h"
#include "mn-mailbox-properties-private.h"
#include "mn-util.h"
#include "mn-properties-dialog.h"
#if WITH_MBOX || WITH_MOZILLA || WITH_MH || WITH_MAILDIR || WITH_SYLPHEED
#include "mn-custom-vfs-mailbox.h"
#endif
#include "mn-stock.h"

static char *current_folder_uri = NULL;

#line 40 "mn-autodetect-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_AUTODETECT_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_AUTODETECT_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_AUTODETECT_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_AUTODETECT_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_AUTODETECT_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_AUTODETECT_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNAutodetectMailboxProperties Self;
typedef MNAutodetectMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
#line 100 "src/mn-autodetect-mailbox-properties.gob"
static void mn_autodetect_mailbox_properties_class_init (MNAutodetectMailboxPropertiesClass * class);
#line 58 "mn-autodetect-mailbox-properties.c"
#line 109 "src/mn-autodetect-mailbox-properties.gob"
static void mn_autodetect_mailbox_properties_init (MNAutodetectMailboxProperties * self);
#line 61 "mn-autodetect-mailbox-properties.c"
#line 154 "src/mn-autodetect-mailbox-properties.gob"
static void mn_autodetect_mailbox_properties_browse_clicked_h (GtkButton * button, gpointer user_data);
#line 64 "mn-autodetect-mailbox-properties.c"
#line 196 "src/mn-autodetect-mailbox-properties.gob"
static void mn_autodetect_mailbox_properties_current_folder_changed_h (GtkFileChooser * chooser, gpointer user_data);
#line 67 "mn-autodetect-mailbox-properties.c"
#line 203 "src/mn-autodetect-mailbox-properties.gob"
static void mn_autodetect_mailbox_properties_chooser_response_h (GtkDialog * dialog, int response, gpointer user_data);
#line 70 "mn-autodetect-mailbox-properties.c"
#line 219 "src/mn-autodetect-mailbox-properties.gob"
static void ___6_mn_autodetect_mailbox_properties_set_mailbox (MNMailboxProperties * properties, MNMailbox * mailbox);
#line 73 "mn-autodetect-mailbox-properties.c"
#line 231 "src/mn-autodetect-mailbox-properties.gob"
static MNMailbox * ___7_mn_autodetect_mailbox_properties_get_mailbox (MNMailboxProperties * properties);
#line 76 "mn-autodetect-mailbox-properties.c"

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_DEFAULT_NAME,
	PROP_DEFAULT_CHECK_DELAY
};

/* pointer to the class of our parent */
static MNMailboxPropertiesClass *parent_class = NULL;

/* Short form macros */
#define self_browse_clicked_h mn_autodetect_mailbox_properties_browse_clicked_h
#define self_current_folder_changed_h mn_autodetect_mailbox_properties_current_folder_changed_h
#define self_chooser_response_h mn_autodetect_mailbox_properties_chooser_response_h
GType
mn_autodetect_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNAutodetectMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_autodetect_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNAutodetectMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_autodetect_mailbox_properties_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_MAILBOX_PROPERTIES, "MNAutodetectMailboxProperties", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNAutodetectMailboxProperties *)g_object_new(mn_autodetect_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNAutodetectMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNAutodetectMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNAutodetectMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNAutodetectMailboxProperties *)g_object_new_valist (mn_autodetect_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::finalize"
	MNAutodetectMailboxProperties *self G_GNUC_UNUSED = MN_AUTODETECT_MAILBOX_PROPERTIES (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

#line 100 "src/mn-autodetect-mailbox-properties.gob"
static void 
mn_autodetect_mailbox_properties_class_init (MNAutodetectMailboxPropertiesClass * class G_GNUC_UNUSED)
{
#line 150 "mn-autodetect-mailbox-properties.c"
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) class;
	MNMailboxPropertiesClass *mn_mailbox_properties_class = (MNMailboxPropertiesClass *)class;

	g_type_class_add_private(class,sizeof(MNAutodetectMailboxPropertiesPrivate));

	parent_class = g_type_class_ref (MN_TYPE_MAILBOX_PROPERTIES);

#line 219 "src/mn-autodetect-mailbox-properties.gob"
	mn_mailbox_properties_class->set_mailbox = ___6_mn_autodetect_mailbox_properties_set_mailbox;
#line 231 "src/mn-autodetect-mailbox-properties.gob"
	mn_mailbox_properties_class->get_mailbox = ___7_mn_autodetect_mailbox_properties_get_mailbox;
#line 163 "mn-autodetect-mailbox-properties.c"
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
    {
	g_object_class_override_property (g_object_class,
		PROP_COMPLETE,
		"complete");
	g_object_class_override_property (g_object_class,
		PROP_DEFAULT_NAME,
		"default_name");
	g_object_class_override_property (g_object_class,
		PROP_DEFAULT_CHECK_DELAY,
		"default_check_delay");
    }
 {
#line 101 "src/mn-autodetect-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->type = "custom-vfs";
    p_class->stock_id = MN_STOCK_UNKNOWN;
    p_class->combo_label = _("Autodetect");
  
#line 186 "mn-autodetect-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 109 "src/mn-autodetect-mailbox-properties.gob"
static void 
mn_autodetect_mailbox_properties_init (MNAutodetectMailboxProperties * self G_GNUC_UNUSED)
{
#line 194 "mn-autodetect-mailbox-properties.c"
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_AUTODETECT_MAILBOX_PROPERTIES,MNAutodetectMailboxPropertiesPrivate);
 {
#line 110 "src/mn-autodetect-mailbox-properties.gob"

    MNMailboxProperties *properties = MN_MAILBOX_PROPERTIES(self);
    GtkWidget *location_vbox;
    GtkWidget *outer_hbox;
    GtkWidget *hbox;
    GtkWidget *label;
    GtkWidget *button;

    /* translators: header capitalization */
    location_vbox = mn_mailbox_properties_add_general_section(properties, _("Location"));

    label = gtk_label_new_with_mnemonic(_("_Location:"));
    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);

    outer_hbox = gtk_hbox_new(FALSE, 12);
    hbox = gtk_hbox_new(FALSE, 6);

    selfp->location_entry = gtk_entry_new();
    /* translators: header capitalization */
    button = gtk_button_new_with_mnemonic(_("_Browse..."));

    gtk_label_set_mnemonic_widget(GTK_LABEL(label), selfp->location_entry);
    properties->entries = g_slist_append(properties->entries, selfp->location_entry);

    gtk_box_pack_start(GTK_BOX(hbox), selfp->location_entry, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), button, FALSE, FALSE, 0);

    gtk_box_pack_start(GTK_BOX(outer_hbox), label, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(outer_hbox), hbox, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(location_vbox), outer_hbox, FALSE, FALSE, 0);

    gtk_widget_show_all(outer_hbox);

    gtk_size_group_add_widget(MN_MAILBOX_PROPERTIES(self)->label_size_group, label);

    g_object_connect(selfp->location_entry,
		     "swapped-signal::changed", mn_mailbox_properties_notify_complete, self,
		     "swapped-signal::changed", mn_mailbox_properties_notify_default_name, self,
		     "swapped-signal::changed", mn_mailbox_properties_notify_default_check_delay, self,
		     NULL);

    g_signal_connect(button, "clicked", G_CALLBACK(self_browse_clicked_h), self);
  
#line 242 "mn-autodetect-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::get_property"
{
	MNAutodetectMailboxProperties *self G_GNUC_UNUSED;

	self = MN_AUTODETECT_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_COMPLETE:
		{
#line 46 "src/mn-autodetect-mailbox-properties.gob"

      const char *location;
      gboolean complete = FALSE;

      location = gtk_entry_get_text(GTK_ENTRY(SELF(self)->_priv->location_entry));
      if (*location)
	{
	  MNMailbox *mailbox;

	  mailbox = mn_mailbox_new_from_uri(location);
	  if (mailbox)
	    {
	      complete = TRUE;
	      g_object_unref(mailbox);
	    }
	}

      g_value_set_boolean(VAL, complete);
    
#line 281 "mn-autodetect-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_NAME:
		{
#line 68 "src/mn-autodetect-mailbox-properties.gob"

      char *name = NULL;
      MNMailbox *mailbox;

      mailbox = mn_mailbox_new_from_uri(gtk_entry_get_text(GTK_ENTRY(selfp->location_entry)));
      if (mailbox)
	{
	  mn_mailbox_seal(mailbox);
	  name = g_strdup(mailbox->runtime_name);
	  g_object_unref(mailbox);
	}

      g_value_take_string(VAL, name);
    
#line 301 "mn-autodetect-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_CHECK_DELAY:
		{
#line 85 "src/mn-autodetect-mailbox-properties.gob"

      int check_delay = -1;
      MNMailbox *mailbox;

      mailbox = mn_mailbox_new_from_uri(gtk_entry_get_text(GTK_ENTRY(selfp->location_entry)));
      if (mailbox)
	{
	  mn_mailbox_seal(mailbox);
	  check_delay = mailbox->runtime_check_delay;
	  g_object_unref(mailbox);
	}

      g_value_set_int(VAL, check_delay);
    
#line 321 "mn-autodetect-mailbox-properties.c"
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



#line 154 "src/mn-autodetect-mailbox-properties.gob"
static void 
mn_autodetect_mailbox_properties_browse_clicked_h (GtkButton * button, gpointer user_data)
{
#line 342 "mn-autodetect-mailbox-properties.c"
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::browse_clicked_h"
{
#line 156 "src/mn-autodetect-mailbox-properties.gob"
	
    Self *self = user_data;
    GtkWidget *toplevel;
    const char *location;

    if (selfp->chooser)
      {
	mn_window_present_from_event(GTK_WINDOW(selfp->chooser));
	return;
      }

    toplevel = gtk_widget_get_toplevel(GTK_WIDGET(button));
    /* translators: header capitalization */
    selfp->chooser = gtk_file_chooser_dialog_new_with_backend(_("Select a File or Folder"),
							      GTK_WINDOW(toplevel),
							      GTK_FILE_CHOOSER_ACTION_OPEN,
							      "gnome-vfs",
							      GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
							      GTK_STOCK_OPEN, 1,
							      NULL);
    mn_add_weak_pointer(&selfp->chooser);

    gtk_window_set_destroy_with_parent(GTK_WINDOW(selfp->chooser), TRUE);
    gtk_file_chooser_set_local_only(GTK_FILE_CHOOSER(selfp->chooser), FALSE);
    mn_file_chooser_dialog_allow_select_folder(GTK_FILE_CHOOSER_DIALOG(selfp->chooser), 1);

    location = gtk_entry_get_text(GTK_ENTRY(selfp->location_entry));
    if (*location)
      gtk_file_chooser_set_uri(GTK_FILE_CHOOSER(selfp->chooser), location);
    else if (current_folder_uri)
      gtk_file_chooser_set_current_folder_uri(GTK_FILE_CHOOSER(selfp->chooser), current_folder_uri);

    g_object_connect(selfp->chooser,
		     "signal::current-folder-changed", self_current_folder_changed_h, self,
		     "signal::response", self_chooser_response_h, self,
		     NULL);

    gtk_widget_show(selfp->chooser);
  }}
#line 385 "mn-autodetect-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 196 "src/mn-autodetect-mailbox-properties.gob"
static void 
mn_autodetect_mailbox_properties_current_folder_changed_h (GtkFileChooser * chooser, gpointer user_data)
{
#line 392 "mn-autodetect-mailbox-properties.c"
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::current_folder_changed_h"
{
#line 198 "src/mn-autodetect-mailbox-properties.gob"
	
    g_free(current_folder_uri);
    current_folder_uri = gtk_file_chooser_get_current_folder_uri(chooser);
  }}
#line 400 "mn-autodetect-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 203 "src/mn-autodetect-mailbox-properties.gob"
static void 
mn_autodetect_mailbox_properties_chooser_response_h (GtkDialog * dialog, int response, gpointer user_data)
{
#line 407 "mn-autodetect-mailbox-properties.c"
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::chooser_response_h"
{
#line 205 "src/mn-autodetect-mailbox-properties.gob"
	
    if (response == 1)
      {
	Self *self = user_data;
	char *uri;

	uri = gtk_file_chooser_get_uri(GTK_FILE_CHOOSER(dialog));
	gtk_entry_set_text(GTK_ENTRY(selfp->location_entry), uri);
	g_free(uri);
      }

    gtk_widget_destroy(GTK_WIDGET(dialog));
  }}
#line 424 "mn-autodetect-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 219 "src/mn-autodetect-mailbox-properties.gob"
static void 
___6_mn_autodetect_mailbox_properties_set_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED, MNMailbox * mailbox)
#line 430 "mn-autodetect-mailbox-properties.c"
#define PARENT_HANDLER(___properties,___mailbox) \
	{ if(MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox) \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox)(___properties,___mailbox); }
{
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::set_mailbox"
{
#line 221 "src/mn-autodetect-mailbox-properties.gob"
	
#if WITH_MBOX || WITH_MOZILLA || WITH_MH || WITH_MAILDIR || WITH_SYLPHEED
    g_return_if_fail(MN_IS_CUSTOM_VFS_MAILBOX(mailbox));

    gtk_entry_set_text(GTK_ENTRY(SELF(properties)->_priv->location_entry), MN_CUSTOM_VFS_MAILBOX(mailbox)->uri);
#else
    g_assert_not_reached();
#endif
  }}
#line 447 "mn-autodetect-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 231 "src/mn-autodetect-mailbox-properties.gob"
static MNMailbox * 
___7_mn_autodetect_mailbox_properties_get_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED)
#line 454 "mn-autodetect-mailbox-properties.c"
#define PARENT_HANDLER(___properties) \
	((MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)? \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)(___properties): \
		((MNMailbox * )0))
{
#define __GOB_FUNCTION__ "MN:Autodetect:Mailbox:Properties::get_mailbox"
{
#line 233 "src/mn-autodetect-mailbox-properties.gob"
	
    const char *uri;

    uri = gtk_entry_get_text(GTK_ENTRY(SELF(properties)->_priv->location_entry));
    return mn_mailbox_new_from_uri(uri);
  }}
#line 469 "mn-autodetect-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER
