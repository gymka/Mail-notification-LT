/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-dialog.h"
#include "mn-mailbox.h"

#ifndef __MN_MAILBOX_PROPERTIES_DIALOG_H__
#define __MN_MAILBOX_PROPERTIES_DIALOG_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAILBOX_PROPERTIES_DIALOG	(mn_mailbox_properties_dialog_get_type())
#define MN_MAILBOX_PROPERTIES_DIALOG(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_properties_dialog_get_type(), MNMailboxPropertiesDialog)
#define MN_MAILBOX_PROPERTIES_DIALOG_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_properties_dialog_get_type(), MNMailboxPropertiesDialog const)
#define MN_MAILBOX_PROPERTIES_DIALOG_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mailbox_properties_dialog_get_type(), MNMailboxPropertiesDialogClass)
#define MN_IS_MAILBOX_PROPERTIES_DIALOG(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mailbox_properties_dialog_get_type ())

#define MN_MAILBOX_PROPERTIES_DIALOG_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mailbox_properties_dialog_get_type(), MNMailboxPropertiesDialogClass)

/* Private structure type */
typedef struct _MNMailboxPropertiesDialogPrivate MNMailboxPropertiesDialogPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAILBOX_PROPERTIES_DIALOG__
#define __TYPEDEF_MN_MAILBOX_PROPERTIES_DIALOG__
typedef struct _MNMailboxPropertiesDialog MNMailboxPropertiesDialog;
#endif
struct _MNMailboxPropertiesDialog {
	MNDialog __parent__;
	/*< private >*/
	GtkWidget * notebook; /* protected */
	GtkWidget * general_vbox; /* protected */
	MNMailboxPropertiesDialogPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailboxPropertiesDialogClass MNMailboxPropertiesDialogClass;
struct _MNMailboxPropertiesDialogClass {
	MNDialogClass __parent__;
};


/*
 * Public methods
 */
GType	mn_mailbox_properties_dialog_get_type	(void) G_GNUC_CONST;
#line 112 "src/mn-mailbox-properties-dialog.gob"
MNMailbox * 	mn_mailbox_properties_dialog_get_mailbox	(MNMailboxPropertiesDialog * self);
#line 63 "mn-mailbox-properties-dialog.h"
#line 89 "src/mn-mailbox-properties-dialog.gob"
void 	mn_mailbox_properties_dialog_set_mailbox	(MNMailboxPropertiesDialog * self,
					MNMailbox * val);
#line 67 "mn-mailbox-properties-dialog.h"
#line 440 "src/mn-mailbox-properties-dialog.gob"
MNMailbox * 	mn_mailbox_properties_dialog_get_current_mailbox	(MNMailboxPropertiesDialog * self);
#line 70 "mn-mailbox-properties-dialog.h"
#line 459 "src/mn-mailbox-properties-dialog.gob"
void 	mn_mailbox_properties_dialog_apply	(MNMailboxPropertiesDialog * self);
#line 73 "mn-mailbox-properties-dialog.h"
#line 478 "src/mn-mailbox-properties-dialog.gob"
void 	mn_mailbox_properties_dialog_cancel	(MNMailboxPropertiesDialog * self);
#line 76 "mn-mailbox-properties-dialog.h"
#line 633 "src/mn-mailbox-properties-dialog.gob"
GtkWidget * 	mn_mailbox_properties_dialog_new	(GtkWindow * parent,
					MNMailbox * mailbox);
#line 80 "mn-mailbox-properties-dialog.h"

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_MAILBOX_PROPERTIES_DIALOG_PROP_DIALOG_PARENT(arg)    	"dialog_parent", __extension__ ({GtkWindow * z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_DIALOG_GET_PROP_DIALOG_PARENT(arg)	"dialog_parent", __extension__ ({GtkWindow * *z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_DIALOG_PROP_MAILBOX(arg)    	"mailbox", __extension__ ({MNMailbox * z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_DIALOG_GET_PROP_MAILBOX(arg)	"mailbox", __extension__ ({MNMailbox * *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_MAILBOX_PROPERTIES_DIALOG_PROP_DIALOG_PARENT(arg)    	"dialog_parent",(GtkWindow * )(arg)
#define MN_MAILBOX_PROPERTIES_DIALOG_GET_PROP_DIALOG_PARENT(arg)	"dialog_parent",(GtkWindow * *)(arg)
#define MN_MAILBOX_PROPERTIES_DIALOG_PROP_MAILBOX(arg)    	"mailbox",(MNMailbox * )(arg)
#define MN_MAILBOX_PROPERTIES_DIALOG_GET_PROP_MAILBOX(arg)	"mailbox",(MNMailbox * *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
