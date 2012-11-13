/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-about-dialog.h"

#include "mn-about-dialog-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 24 "src/mn-about-dialog.gob"

#include <glib/gi18n.h>
#include "mn-util.h"

#line 31 "mn-about-dialog.c"
/* self casting macros */
#define SELF(x) MN_ABOUT_DIALOG(x)
#define SELF_CONST(x) MN_ABOUT_DIALOG_CONST(x)
#define IS_SELF(x) MN_IS_ABOUT_DIALOG(x)
#define TYPE_SELF MN_TYPE_ABOUT_DIALOG
#define SELF_CLASS(x) MN_ABOUT_DIALOG_CLASS(x)

#define SELF_GET_CLASS(x) MN_ABOUT_DIALOG_GET_CLASS(x)

/* self typedefs */
typedef MNAboutDialog Self;
typedef MNAboutDialogClass SelfClass;

/* here are local prototypes */
#line 31 "src/mn-about-dialog.gob"
static void mn_about_dialog_class_init (MNAboutDialogClass * class);
#line 48 "mn-about-dialog.c"
#line 37 "src/mn-about-dialog.gob"
static void mn_about_dialog_init (MNAboutDialog * self);
#line 51 "mn-about-dialog.c"
#line 64 "src/mn-about-dialog.gob"
static void mn_about_dialog_activate_link_cb (GtkAboutDialog * about, const char * link, gpointer data);
#line 54 "mn-about-dialog.c"

/* pointer to the class of our parent */
static GtkAboutDialogClass *parent_class = NULL;

/* Short form macros */
#define self_activate_link_cb mn_about_dialog_activate_link_cb
GType
mn_about_dialog_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNAboutDialogClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_about_dialog_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNAboutDialog),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_about_dialog_init,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_ABOUT_DIALOG, "MNAboutDialog", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNAboutDialog *)g_object_new(mn_about_dialog_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNAboutDialog * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNAboutDialog *
GET_NEW_VARG (const char *first, ...)
{
	MNAboutDialog *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNAboutDialog *)g_object_new_valist (mn_about_dialog_get_type (), first, ap);
	va_end (ap);
	return ret;
}

#line 31 "src/mn-about-dialog.gob"
static void 
mn_about_dialog_class_init (MNAboutDialogClass * class G_GNUC_UNUSED)
{
#line 107 "mn-about-dialog.c"
#define __GOB_FUNCTION__ "MN:About:Dialog::class_init"

	parent_class = g_type_class_ref (GTK_TYPE_ABOUT_DIALOG);

 {
#line 32 "src/mn-about-dialog.gob"

    gtk_about_dialog_set_email_hook(self_activate_link_cb, "mailto:", NULL);
    gtk_about_dialog_set_url_hook(self_activate_link_cb, NULL, NULL);
  
#line 118 "mn-about-dialog.c"
 }
}
#undef __GOB_FUNCTION__
#line 37 "src/mn-about-dialog.gob"
static void 
mn_about_dialog_init (MNAboutDialog * self G_GNUC_UNUSED)
{
#line 126 "mn-about-dialog.c"
#define __GOB_FUNCTION__ "MN:About:Dialog::init"
 {
#line 38 "src/mn-about-dialog.gob"

    GtkAboutDialog *about = GTK_ABOUT_DIALOG(self);
    static const char *authors[] = { "Jean-Yves Lefort <jylefort@brutele.be>", NULL };
    static const char *documenters[] = { "Jean-Yves Lefort <jylefort@brutele.be>", NULL };
    GdkPixbuf *logo;

    gtk_about_dialog_set_version(about, VERSION);
    gtk_about_dialog_set_copyright(about, "Copyright \302\251 2003-2008 Jean-Yves Lefort");
    /* translators: header capitalization */
    gtk_about_dialog_set_comments(about, _("A Mail Notification Icon"));
    gtk_about_dialog_set_website(about, "http://www.nongnu.org/mailnotify");
    gtk_about_dialog_set_authors(about, authors);
    gtk_about_dialog_set_documenters(about, documenters);
    /*
     * translators: Your Name <your-email>
     * optionally followed by one or more: \nOther Contributor's Name <his-email>
     */
    gtk_about_dialog_set_translator_credits(about, _("translator-credits"));

    logo = mn_pixbuf_new(PKGDATADIR G_DIR_SEPARATOR_S "logo.png");
    gtk_about_dialog_set_logo(about, logo);
    g_object_unref(logo);

    g_signal_connect(self, "response", G_CALLBACK(gtk_widget_destroy), NULL);
  
#line 155 "mn-about-dialog.c"
 }
}
#undef __GOB_FUNCTION__



#line 64 "src/mn-about-dialog.gob"
static void 
mn_about_dialog_activate_link_cb (GtkAboutDialog * about, const char * link, gpointer data)
{
#line 166 "mn-about-dialog.c"
#define __GOB_FUNCTION__ "MN:About:Dialog::activate_link_cb"
{
#line 68 "src/mn-about-dialog.gob"
	
    const char *prefix = data;
    char *url;

    url = prefix ? g_strconcat(prefix, link, NULL) : g_strdup(link);
    mn_open_link(GTK_WINDOW(about), url);
    g_free(url);
  }}
#line 178 "mn-about-dialog.c"
#undef __GOB_FUNCTION__
