/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-mailbox.h"

#ifndef __MN_EVOLUTION_MAILBOX_H__
#define __MN_EVOLUTION_MAILBOX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_EVOLUTION_MAILBOX	(mn_evolution_mailbox_get_type())
#define MN_EVOLUTION_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_mailbox_get_type(), MNEvolutionMailbox)
#define MN_EVOLUTION_MAILBOX_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_mailbox_get_type(), MNEvolutionMailbox const)
#define MN_EVOLUTION_MAILBOX_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_evolution_mailbox_get_type(), MNEvolutionMailboxClass)
#define MN_IS_EVOLUTION_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_evolution_mailbox_get_type ())

#define MN_EVOLUTION_MAILBOX_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_evolution_mailbox_get_type(), MNEvolutionMailboxClass)

/* Private structure type */
typedef struct _MNEvolutionMailboxPrivate MNEvolutionMailboxPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_EVOLUTION_MAILBOX__
#define __TYPEDEF_MN_EVOLUTION_MAILBOX__
typedef struct _MNEvolutionMailbox MNEvolutionMailbox;
#endif
struct _MNEvolutionMailbox {
	MNMailbox __parent__;
	/*< public >*/
	char * uri;
	char * folder_name;
	/*< private >*/
	MNEvolutionMailboxPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNEvolutionMailboxClass MNEvolutionMailboxClass;
struct _MNEvolutionMailboxClass {
	MNMailboxClass __parent__;
};


/*
 * Public methods
 */
GType	mn_evolution_mailbox_get_type	(void) G_GNUC_CONST;

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_EVOLUTION_MAILBOX_PROP_URI(arg)    	"uri", __extension__ ({gchar *z = (arg); z;})
#define MN_EVOLUTION_MAILBOX_GET_PROP_URI(arg)	"uri", __extension__ ({gchar **z = (arg); z;})
#define MN_EVOLUTION_MAILBOX_PROP_FOLDER_NAME(arg)    	"folder_name", __extension__ ({gchar *z = (arg); z;})
#define MN_EVOLUTION_MAILBOX_GET_PROP_FOLDER_NAME(arg)	"folder_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_EVOLUTION_MAILBOX_PROP_URI(arg)    	"uri",(gchar *)(arg)
#define MN_EVOLUTION_MAILBOX_GET_PROP_URI(arg)	"uri",(gchar **)(arg)
#define MN_EVOLUTION_MAILBOX_PROP_FOLDER_NAME(arg)    	"folder_name",(gchar *)(arg)
#define MN_EVOLUTION_MAILBOX_GET_PROP_FOLDER_NAME(arg)	"folder_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
