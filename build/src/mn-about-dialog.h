/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_ABOUT_DIALOG_H__
#define __MN_ABOUT_DIALOG_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_ABOUT_DIALOG	(mn_about_dialog_get_type())
#define MN_ABOUT_DIALOG(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_about_dialog_get_type(), MNAboutDialog)
#define MN_ABOUT_DIALOG_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_about_dialog_get_type(), MNAboutDialog const)
#define MN_ABOUT_DIALOG_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_about_dialog_get_type(), MNAboutDialogClass)
#define MN_IS_ABOUT_DIALOG(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_about_dialog_get_type ())

#define MN_ABOUT_DIALOG_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_about_dialog_get_type(), MNAboutDialogClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_ABOUT_DIALOG__
#define __TYPEDEF_MN_ABOUT_DIALOG__
typedef struct _MNAboutDialog MNAboutDialog;
#endif
struct _MNAboutDialog {
	GtkAboutDialog __parent__;
};

/*
 * Class definition
 */
typedef struct _MNAboutDialogClass MNAboutDialogClass;
struct _MNAboutDialogClass {
	GtkAboutDialogClass __parent__;
};


/*
 * Public methods
 */
GType	mn_about_dialog_get_type	(void) G_GNUC_CONST;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
