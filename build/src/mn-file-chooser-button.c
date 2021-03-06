/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-file-chooser-button.h"

#include "mn-file-chooser-button-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 39 "src/mn-file-chooser-button.gob"

#include <glib/gi18n.h>
#include <gnome.h>
#include "mn-util.h"

#line 32 "mn-file-chooser-button.c"
/* self casting macros */
#define SELF(x) MN_FILE_CHOOSER_BUTTON(x)
#define SELF_CONST(x) MN_FILE_CHOOSER_BUTTON_CONST(x)
#define IS_SELF(x) MN_IS_FILE_CHOOSER_BUTTON(x)
#define TYPE_SELF MN_TYPE_FILE_CHOOSER_BUTTON
#define SELF_CLASS(x) MN_FILE_CHOOSER_BUTTON_CLASS(x)

#define SELF_GET_CLASS(x) MN_FILE_CHOOSER_BUTTON_GET_CLASS(x)

/* self typedefs */
typedef MNFileChooserButton Self;
typedef MNFileChooserButtonClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
#line 0 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_class_init (MNFileChooserButtonClass * c);
#line 51 "mn-file-chooser-button.c"
#line 73 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_init (MNFileChooserButton * self);
#line 54 "mn-file-chooser-button.c"
#line 111 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_clicked_h (GtkButton * button, gpointer data);
#line 57 "mn-file-chooser-button.c"
#line 147 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_update (MNFileChooserButton * self);
#line 60 "mn-file-chooser-button.c"
#line 207 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_get_file_info_cb (GnomeVFSAsyncHandle * handle, GList * results, gpointer data);
#line 63 "mn-file-chooser-button.c"
#line 253 "src/mn-file-chooser-button.gob"
static void mn_file_chooser_button_response_h (GtkDialog * dialog, int response, gpointer user_data);
#line 66 "mn-file-chooser-button.c"

enum {
	PROP_0,
	PROP_FILENAME
};

/* pointer to the class of our parent */
static GtkHBoxClass *parent_class = NULL;

/* Short form macros */
#define self_get_filename mn_file_chooser_button_get_filename
#define self_set_filename mn_file_chooser_button_set_filename
#define self_clicked_h mn_file_chooser_button_clicked_h
#define self_update mn_file_chooser_button_update
#define self_get_file_info_cb mn_file_chooser_button_get_file_info_cb
#define self_response_h mn_file_chooser_button_response_h
#define self_new mn_file_chooser_button_new
GType
mn_file_chooser_button_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNFileChooserButtonClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_file_chooser_button_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNFileChooserButton),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_file_chooser_button_init,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_HBOX, "MNFileChooserButton", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNFileChooserButton *)g_object_new(mn_file_chooser_button_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNFileChooserButton * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNFileChooserButton *
GET_NEW_VARG (const char *first, ...)
{
	MNFileChooserButton *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNFileChooserButton *)g_object_new_valist (mn_file_chooser_button_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::dispose"
	MNFileChooserButton *self G_GNUC_UNUSED = MN_FILE_CHOOSER_BUTTON (obj_self);
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 69 "src/mn-file-chooser-button.gob"
	if(self->_priv->dialog) { gtk_widget_destroy ((gpointer) self->_priv->dialog); self->_priv->dialog = NULL; }
#line 136 "mn-file-chooser-button.c"
#line 71 "src/mn-file-chooser-button.gob"
	if(self->_priv->async_handle) { gnome_vfs_async_cancel ((gpointer) self->_priv->async_handle); self->_priv->async_handle = NULL; }
#line 139 "mn-file-chooser-button.c"
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::finalize"
	MNFileChooserButton *self G_GNUC_UNUSED = MN_FILE_CHOOSER_BUTTON (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 47 "src/mn-file-chooser-button.gob"
	if(self->_priv->filename) { g_free ((gpointer) self->_priv->filename); self->_priv->filename = NULL; }
#line 154 "mn-file-chooser-button.c"
}
#undef __GOB_FUNCTION__

static void 
mn_file_chooser_button_class_init (MNFileChooserButtonClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	g_type_class_add_private(c,sizeof(MNFileChooserButtonPrivate));

	parent_class = g_type_class_ref (GTK_TYPE_HBOX);

	g_object_class->dispose = ___dispose;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_string
		("filename" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_FILENAME,
		param_spec);
    }
}
#undef __GOB_FUNCTION__
#line 73 "src/mn-file-chooser-button.gob"
static void 
mn_file_chooser_button_init (MNFileChooserButton * self G_GNUC_UNUSED)
{
#line 191 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_FILE_CHOOSER_BUTTON,MNFileChooserButtonPrivate);
 {
#line 74 "src/mn-file-chooser-button.gob"

    GtkWidget *button;
    GtkWidget *box;
    GtkWidget *separator;
    GtkWidget *image;

    button = gtk_button_new();
    gtk_container_add(GTK_CONTAINER(self), button);
    gtk_widget_show(button);

    box = gtk_hbox_new(FALSE, 4);
    gtk_container_add(GTK_CONTAINER(button), box);
    gtk_widget_show(box);

    selfp->image = gtk_image_new();
    gtk_box_pack_start(GTK_BOX(box), selfp->image, FALSE, FALSE, 0);
    gtk_widget_show(selfp->image);

    selfp->label = gtk_label_new(NULL);
    gtk_label_set_ellipsize(GTK_LABEL(selfp->label), PANGO_ELLIPSIZE_END);
    gtk_misc_set_alignment(GTK_MISC(selfp->label), 0.0, 0.5);
    gtk_container_add(GTK_CONTAINER(box), selfp->label);
    gtk_widget_show(selfp->label);

    separator = gtk_vseparator_new();
    gtk_box_pack_start(GTK_BOX(box), separator, FALSE, FALSE, 0);
    gtk_widget_show(separator);

    image = gtk_image_new_from_stock(GTK_STOCK_OPEN, GTK_ICON_SIZE_MENU);
    gtk_box_pack_start(GTK_BOX(box), image, FALSE, FALSE, 0);
    gtk_widget_show(image);

    g_signal_connect(button, "clicked", G_CALLBACK(self_clicked_h), self);

    self_update(self);
  
#line 232 "mn-file-chooser-button.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::set_property"
{
	MNFileChooserButton *self G_GNUC_UNUSED;

	self = MN_FILE_CHOOSER_BUTTON (object);

	switch (property_id) {
	case PROP_FILENAME:
		{
#line 54 "src/mn-file-chooser-button.gob"

      g_free(selfp->filename);
      selfp->filename = g_value_dup_string(VAL);

      self_update(self);

      if (selfp->dialog)
	gtk_file_chooser_set_filename(GTK_FILE_CHOOSER(selfp->dialog), selfp->filename);
    
#line 261 "mn-file-chooser-button.c"
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
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::get_property"
{
	MNFileChooserButton *self G_GNUC_UNUSED;

	self = MN_FILE_CHOOSER_BUTTON (object);

	switch (property_id) {
	case PROP_FILENAME:
		{
#line 50 "src/mn-file-chooser-button.gob"

      g_value_set_string(VAL, selfp->filename);
    
#line 294 "mn-file-chooser-button.c"
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


#line 50 "src/mn-file-chooser-button.gob"
gchar * 
mn_file_chooser_button_get_filename (MNFileChooserButton * self)
{
#line 314 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::get_filename"
{
#line 48 "src/mn-file-chooser-button.gob"
		gchar* val; g_object_get (G_OBJECT (self), "filename", &val, NULL); return val;
}}
#line 320 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__

#line 54 "src/mn-file-chooser-button.gob"
void 
mn_file_chooser_button_set_filename (MNFileChooserButton * self, gchar * val)
{
#line 327 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::set_filename"
{
#line 48 "src/mn-file-chooser-button.gob"
		g_object_set (G_OBJECT (self), "filename", val, NULL);
}}
#line 333 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__


#line 111 "src/mn-file-chooser-button.gob"
static void 
mn_file_chooser_button_clicked_h (GtkButton * button, gpointer data)
{
#line 341 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::clicked_h"
{
#line 113 "src/mn-file-chooser-button.gob"
	
    Self *self = data;

    if (! selfp->dialog)
      {
	/* translators: header capitalization */
	selfp->dialog = GTK_WIDGET(selfp->create_dialog(selfp->create_dialog_data));
	g_assert(GTK_IS_FILE_CHOOSER_DIALOG(selfp->dialog));

	mn_add_weak_pointer(&selfp->dialog);

	if (selfp->filename)
	  gtk_file_chooser_set_filename(GTK_FILE_CHOOSER(selfp->dialog), selfp->filename);

	g_signal_connect(selfp->dialog, "response", G_CALLBACK(self_response_h), self);
      }

    if (! GTK_WIDGET_VISIBLE(selfp->dialog))
      {
	GtkWindow *parent;

	parent = mn_widget_get_parent_window(GTK_WIDGET(self));
	if (parent)
	  {
	    if (parent != gtk_window_get_transient_for(GTK_WINDOW(selfp->dialog)))
	      gtk_window_set_transient_for(GTK_WINDOW(selfp->dialog), parent);

	    gtk_window_set_modal(GTK_WINDOW(selfp->dialog), gtk_window_get_modal(parent));
	  }
      }

    mn_window_present_from_event(GTK_WINDOW(selfp->dialog));
  }}
#line 378 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__

#line 147 "src/mn-file-chooser-button.gob"
static void 
mn_file_chooser_button_update (MNFileChooserButton * self)
{
#line 385 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::update"
#line 147 "src/mn-file-chooser-button.gob"
	g_return_if_fail (self != NULL);
#line 147 "src/mn-file-chooser-button.gob"
	g_return_if_fail (MN_IS_FILE_CHOOSER_BUTTON (self));
#line 391 "mn-file-chooser-button.c"
{
#line 149 "src/mn-file-chooser-button.gob"
	
    GnomeVFSURI *uri = NULL;

    if (selfp->async_handle)
      {
	gnome_vfs_async_cancel(selfp->async_handle);
	selfp->async_handle = NULL;
      }

    if (selfp->filename && *selfp->filename)
      {
	char *text_uri;
	char *base;

	base = g_path_get_basename(selfp->filename);
	gtk_label_set_text(GTK_LABEL(selfp->label), base);
	g_free(base);

	text_uri = gnome_vfs_get_uri_from_local_path(selfp->filename);
	if (text_uri)
	  {
	    uri = gnome_vfs_uri_new(text_uri);
	    g_free(text_uri);
	  }
      }
    else
      /*
       * translators: GTK+ has the same message used in the same
       * context; please use the GTK+ translation for consistency
       */
      gtk_label_set_text(GTK_LABEL(selfp->label), _("(None)"));

    /*
     * Do not use MN_STOCK_UNKNOWN: we want to appear exactly as a
     * GtkFileChooserButton.
     */
    gtk_image_set_from_icon_name(GTK_IMAGE(selfp->image), "stock_unknown", GTK_ICON_SIZE_MENU);

    if (uri)
      {
	GList *uri_list = NULL;

	uri_list = g_list_append(uri_list, uri);

	g_object_ref(self);
	gnome_vfs_async_get_file_info(&selfp->async_handle,
				      uri_list,
				      GNOME_VFS_FILE_INFO_GET_MIME_TYPE
				      | GNOME_VFS_FILE_INFO_FOLLOW_LINKS,
				      GNOME_VFS_PRIORITY_DEFAULT,
				      self_get_file_info_cb,
				      self);

	gnome_vfs_uri_unref(uri);
	g_list_free(uri_list);
      }
  }}
#line 451 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__

#line 207 "src/mn-file-chooser-button.gob"
static void 
mn_file_chooser_button_get_file_info_cb (GnomeVFSAsyncHandle * handle, GList * results, gpointer data)
{
#line 458 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::get_file_info_cb"
{
#line 209 "src/mn-file-chooser-button.gob"
	
    Self *self = data;

    GDK_THREADS_ENTER();

    if (results)
      {
	GnomeVFSGetFileInfoResult *result = results->data;

	if (result->result == GNOME_VFS_OK
	    && (result->file_info->valid_fields & GNOME_VFS_FILE_INFO_FIELDS_MIME_TYPE) != 0)
	  {
	    char *uri;
	    char *icon_name;

	    uri = gnome_vfs_get_uri_from_local_path(selfp->filename);
	    g_assert(uri != NULL);

	    icon_name = gnome_icon_lookup(gtk_icon_theme_get_default(),
					  NULL,
					  uri,
					  NULL,
					  result->file_info,
					  result->file_info->mime_type,
					  GNOME_ICON_LOOKUP_FLAGS_NONE,
					  NULL);

	    g_free(uri);

	    if (icon_name)
	      {
		gtk_image_set_from_icon_name(GTK_IMAGE(selfp->image), icon_name, GTK_ICON_SIZE_MENU);
		g_free(icon_name);
	      }
	  }
      }

    selfp->async_handle = NULL;
    g_object_unref(self);

    /* do not call gdk_flush(), we're normally in the main thread */
    GDK_THREADS_LEAVE();
  }}
#line 505 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__

#line 253 "src/mn-file-chooser-button.gob"
static void 
mn_file_chooser_button_response_h (GtkDialog * dialog, int response, gpointer user_data)
{
#line 512 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::response_h"
{
#line 255 "src/mn-file-chooser-button.gob"
	
    Self *self = user_data;

    if (response == GTK_RESPONSE_ACCEPT)
      {
	char *filename;

	filename = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
	self_set_filename(self, filename);
	g_free(filename);
      }

    gtk_widget_destroy(GTK_WIDGET(dialog));
  }}
#line 530 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__

#line 270 "src/mn-file-chooser-button.gob"
GtkWidget * 
mn_file_chooser_button_new (MNFileChooserButtonCreateDialogFunction create_dialog, gpointer data)
{
#line 537 "mn-file-chooser-button.c"
#define __GOB_FUNCTION__ "MN:File:Chooser:Button::new"
#line 270 "src/mn-file-chooser-button.gob"
	g_return_val_if_fail (create_dialog != NULL, (GtkWidget * )0);
#line 541 "mn-file-chooser-button.c"
{
#line 273 "src/mn-file-chooser-button.gob"
	
    Self *self = GET_NEW;

    selfp->create_dialog = create_dialog;
    selfp->create_dialog_data = data;

    return GTK_WIDGET(self);
  }}
#line 552 "mn-file-chooser-button.c"
#undef __GOB_FUNCTION__
