/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-pi-mailbox-properties.h"

#ifndef __MN_IMAP_MAILBOX_PROPERTIES_H__
#define __MN_IMAP_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_IMAP_MAILBOX_PROPERTIES	(mn_imap_mailbox_properties_get_type())
#define MN_IMAP_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_imap_mailbox_properties_get_type(), MNIMAPMailboxProperties)
#define MN_IMAP_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_imap_mailbox_properties_get_type(), MNIMAPMailboxProperties const)
#define MN_IMAP_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_imap_mailbox_properties_get_type(), MNIMAPMailboxPropertiesClass)
#define MN_IS_IMAP_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_imap_mailbox_properties_get_type ())

#define MN_IMAP_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_imap_mailbox_properties_get_type(), MNIMAPMailboxPropertiesClass)

/* Private structure type */
typedef struct _MNIMAPMailboxPropertiesPrivate MNIMAPMailboxPropertiesPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_IMAP_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_IMAP_MAILBOX_PROPERTIES__
typedef struct _MNIMAPMailboxProperties MNIMAPMailboxProperties;
#endif
struct _MNIMAPMailboxProperties {
	MNPIMailboxProperties __parent__;
	/*< private >*/
	MNIMAPMailboxPropertiesPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNIMAPMailboxPropertiesClass MNIMAPMailboxPropertiesClass;
struct _MNIMAPMailboxPropertiesClass {
	MNPIMailboxPropertiesClass __parent__;
};


/*
 * Public methods
 */
GType	mn_imap_mailbox_properties_get_type	(void) G_GNUC_CONST;

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_IMAP_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete", __extension__ ({gboolean *z = (arg); z;})
#define MN_IMAP_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_IMAP_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete",(gboolean *)(arg)
#define MN_IMAP_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
