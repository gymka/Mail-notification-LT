/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-webmail-mailbox.h"

#ifndef __MN_HOTMAIL_MAILBOX_H__
#define __MN_HOTMAIL_MAILBOX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_HOTMAIL_MAILBOX	(mn_hotmail_mailbox_get_type())
#define MN_HOTMAIL_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_hotmail_mailbox_get_type(), MNHotmailMailbox)
#define MN_HOTMAIL_MAILBOX_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_hotmail_mailbox_get_type(), MNHotmailMailbox const)
#define MN_HOTMAIL_MAILBOX_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_hotmail_mailbox_get_type(), MNHotmailMailboxClass)
#define MN_IS_HOTMAIL_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_hotmail_mailbox_get_type ())

#define MN_HOTMAIL_MAILBOX_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_hotmail_mailbox_get_type(), MNHotmailMailboxClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_HOTMAIL_MAILBOX__
#define __TYPEDEF_MN_HOTMAIL_MAILBOX__
typedef struct _MNHotmailMailbox MNHotmailMailbox;
#endif
struct _MNHotmailMailbox {
	MNWebmailMailbox __parent__;
};

/*
 * Class definition
 */
typedef struct _MNHotmailMailboxClass MNHotmailMailboxClass;
struct _MNHotmailMailboxClass {
	MNWebmailMailboxClass __parent__;
};


/*
 * Public methods
 */
GType	mn_hotmail_mailbox_get_type	(void) G_GNUC_CONST;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
