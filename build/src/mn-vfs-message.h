/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <libgnomevfs/gnome-vfs.h>
#include "mn-message.h"
#include "mn-decls.h"

#ifndef __MN_VFS_MESSAGE_H__
#define __MN_VFS_MESSAGE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_VFS_MESSAGE	(mn_vfs_message_get_type())
#define MN_VFS_MESSAGE(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_vfs_message_get_type(), MNVFSMessage)
#define MN_VFS_MESSAGE_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_vfs_message_get_type(), MNVFSMessage const)
#define MN_VFS_MESSAGE_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_vfs_message_get_type(), MNVFSMessageClass)
#define MN_IS_VFS_MESSAGE(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_vfs_message_get_type ())

#define MN_VFS_MESSAGE_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_vfs_message_get_type(), MNVFSMessageClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_VFS_MESSAGE__
#define __TYPEDEF_MN_VFS_MESSAGE__
typedef struct _MNVFSMessage MNVFSMessage;
#endif
struct _MNVFSMessage {
	MNMessage __parent__;
	/*< private >*/
	GnomeVFSURI * vfs_uri; /* protected */
};

/*
 * Class definition
 */
typedef struct _MNVFSMessageClass MNVFSMessageClass;
struct _MNVFSMessageClass {
	MNMessageClass __parent__;
};


/*
 * Public methods
 */
GType	mn_vfs_message_get_type	(void) G_GNUC_CONST;
#line 52 "src/mn-vfs-message.gob"
MNVFSMessage * 	mn_vfs_message_new	(GType type,
					MNVFSMailboxBackend * backend,
					const char * mid,
					GnomeVFSURI * dir_uri,
					const char * filename,
					MNMessageFlags flags,
					gboolean handle_status,
					GError ** err);
#line 66 "mn-vfs-message.h"
#line 83 "src/mn-vfs-message.gob"
MNVFSMessage * 	mn_vfs_message_new_from_message	(MNVFSMessage * message,
					GnomeVFSURI * dir_uri,
					const char * filename,
					MNMessageFlags flags);
#line 72 "mn-vfs-message.h"

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_VFS_MESSAGE_PROP_VFS_URI(arg)    	"vfs_uri", __extension__ ({GnomeVFSURI * z = (arg); z;})
#define MN_VFS_MESSAGE_GET_PROP_VFS_URI(arg)	"vfs_uri", __extension__ ({GnomeVFSURI * *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_VFS_MESSAGE_PROP_VFS_URI(arg)    	"vfs_uri",(GnomeVFSURI * )(arg)
#define MN_VFS_MESSAGE_GET_PROP_VFS_URI(arg)	"vfs_uri",(GnomeVFSURI * *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
