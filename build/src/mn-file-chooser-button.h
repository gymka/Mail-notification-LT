/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_FILE_CHOOSER_BUTTON_H__
#define __MN_FILE_CHOOSER_BUTTON_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



typedef GtkFileChooserDialog *(*MNFileChooserButtonCreateDialogFunction) (gpointer data);


/*
 * Type checking and casting macros
 */
#define MN_TYPE_FILE_CHOOSER_BUTTON	(mn_file_chooser_button_get_type())
#define MN_FILE_CHOOSER_BUTTON(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_file_chooser_button_get_type(), MNFileChooserButton)
#define MN_FILE_CHOOSER_BUTTON_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_file_chooser_button_get_type(), MNFileChooserButton const)
#define MN_FILE_CHOOSER_BUTTON_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_file_chooser_button_get_type(), MNFileChooserButtonClass)
#define MN_IS_FILE_CHOOSER_BUTTON(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_file_chooser_button_get_type ())

#define MN_FILE_CHOOSER_BUTTON_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_file_chooser_button_get_type(), MNFileChooserButtonClass)

/* Private structure type */
typedef struct _MNFileChooserButtonPrivate MNFileChooserButtonPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_FILE_CHOOSER_BUTTON__
#define __TYPEDEF_MN_FILE_CHOOSER_BUTTON__
typedef struct _MNFileChooserButton MNFileChooserButton;
#endif
struct _MNFileChooserButton {
	GtkHBox __parent__;
	/*< private >*/
	MNFileChooserButtonPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNFileChooserButtonClass MNFileChooserButtonClass;
struct _MNFileChooserButtonClass {
	GtkHBoxClass __parent__;
};


/*
 * Public methods
 */
GType	mn_file_chooser_button_get_type	(void) G_GNUC_CONST;
#line 50 "src/mn-file-chooser-button.gob"
gchar * 	mn_file_chooser_button_get_filename	(MNFileChooserButton * self);
#line 64 "mn-file-chooser-button.h"
#line 54 "src/mn-file-chooser-button.gob"
void 	mn_file_chooser_button_set_filename	(MNFileChooserButton * self,
					gchar * val);
#line 68 "mn-file-chooser-button.h"
#line 270 "src/mn-file-chooser-button.gob"
GtkWidget * 	mn_file_chooser_button_new	(MNFileChooserButtonCreateDialogFunction create_dialog,
					gpointer data);
#line 72 "mn-file-chooser-button.h"

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_FILE_CHOOSER_BUTTON_PROP_FILENAME(arg)    	"filename", __extension__ ({gchar *z = (arg); z;})
#define MN_FILE_CHOOSER_BUTTON_GET_PROP_FILENAME(arg)	"filename", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_FILE_CHOOSER_BUTTON_PROP_FILENAME(arg)    	"filename",(gchar *)(arg)
#define MN_FILE_CHOOSER_BUTTON_GET_PROP_FILENAME(arg)	"filename",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
