/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-mailbox-properties.h"

#ifndef __MN_EVOLUTION_MAILBOX_PROPERTIES_H__
#define __MN_EVOLUTION_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_EVOLUTION_MAILBOX_PROPERTIES	(mn_evolution_mailbox_properties_get_type())
#define MN_EVOLUTION_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_mailbox_properties_get_type(), MNEvolutionMailboxProperties)
#define MN_EVOLUTION_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_mailbox_properties_get_type(), MNEvolutionMailboxProperties const)
#define MN_EVOLUTION_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_evolution_mailbox_properties_get_type(), MNEvolutionMailboxPropertiesClass)
#define MN_IS_EVOLUTION_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_evolution_mailbox_properties_get_type ())

#define MN_EVOLUTION_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_evolution_mailbox_properties_get_type(), MNEvolutionMailboxPropertiesClass)

/* Private structure type */
typedef struct _MNEvolutionMailboxPropertiesPrivate MNEvolutionMailboxPropertiesPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_EVOLUTION_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_EVOLUTION_MAILBOX_PROPERTIES__
typedef struct _MNEvolutionMailboxProperties MNEvolutionMailboxProperties;
#endif
struct _MNEvolutionMailboxProperties {
	MNMailboxProperties __parent__;
	/*< private >*/
	MNEvolutionMailboxPropertiesPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNEvolutionMailboxPropertiesClass MNEvolutionMailboxPropertiesClass;
struct _MNEvolutionMailboxPropertiesClass {
	MNMailboxPropertiesClass __parent__;
};


/*
 * Public methods
 */
GType	mn_evolution_mailbox_properties_get_type	(void) G_GNUC_CONST;

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_EVOLUTION_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete", __extension__ ({gboolean *z = (arg); z;})
#define MN_EVOLUTION_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_EVOLUTION_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete",(gboolean *)(arg)
#define MN_EVOLUTION_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
