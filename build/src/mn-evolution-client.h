/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <dbus/dbus-glib.h>

#ifndef __MN_EVOLUTION_CLIENT_H__
#define __MN_EVOLUTION_CLIENT_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_EVOLUTION_CLIENT	(mn_evolution_client_get_type())
#define MN_EVOLUTION_CLIENT(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_client_get_type(), MNEvolutionClient)
#define MN_EVOLUTION_CLIENT_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_evolution_client_get_type(), MNEvolutionClient const)
#define MN_EVOLUTION_CLIENT_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_evolution_client_get_type(), MNEvolutionClientClass)
#define MN_IS_EVOLUTION_CLIENT(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_evolution_client_get_type ())

#define MN_EVOLUTION_CLIENT_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_evolution_client_get_type(), MNEvolutionClientClass)

/* Private structure type */
typedef struct _MNEvolutionClientPrivate MNEvolutionClientPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_EVOLUTION_CLIENT__
#define __TYPEDEF_MN_EVOLUTION_CLIENT__
typedef struct _MNEvolutionClient MNEvolutionClient;
#endif
struct _MNEvolutionClient {
	GObject __parent__;
	/*< public >*/
	DBusGProxy * proxy;
	/*< private >*/
	MNEvolutionClientPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNEvolutionClientClass MNEvolutionClientClass;
struct _MNEvolutionClientClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	mn_evolution_client_get_type	(void) G_GNUC_CONST;
#line 39 "src/mn-evolution-client.gob"
DBusGProxy * 	mn_evolution_client_get_proxy	(MNEvolutionClient * self);
#line 62 "mn-evolution-client.h"
#line 39 "src/mn-evolution-client.gob"
void 	mn_evolution_client_set_proxy	(MNEvolutionClient * self,
					DBusGProxy * val);
#line 66 "mn-evolution-client.h"
#line 142 "src/mn-evolution-client.gob"
MNEvolutionClient * 	mn_evolution_client_get	(void);
#line 69 "mn-evolution-client.h"

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_EVOLUTION_CLIENT_PROP_PROXY(arg)    	"proxy", __extension__ ({DBusGProxy * z = (arg); z;})
#define MN_EVOLUTION_CLIENT_GET_PROP_PROXY(arg)	"proxy", __extension__ ({DBusGProxy * *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_EVOLUTION_CLIENT_PROP_PROXY(arg)    	"proxy",(DBusGProxy * )(arg)
#define MN_EVOLUTION_CLIENT_GET_PROP_PROXY(arg)	"proxy",(DBusGProxy * *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
