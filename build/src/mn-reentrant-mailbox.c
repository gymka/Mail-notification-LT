/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-reentrant-mailbox.h"

#include "mn-reentrant-mailbox-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 24 "src/mn-reentrant-mailbox.gob"

#include <gtk/gtk.h>
#include "mn-mailbox-private.h"
#include "mn-util.h"

typedef struct
{
  MNReentrantMailbox	*self;
  int			check_id;
} CheckInfo;

#line 38 "mn-reentrant-mailbox.c"
/* self casting macros */
#define SELF(x) MN_REENTRANT_MAILBOX(x)
#define SELF_CONST(x) MN_REENTRANT_MAILBOX_CONST(x)
#define IS_SELF(x) MN_IS_REENTRANT_MAILBOX(x)
#define TYPE_SELF MN_TYPE_REENTRANT_MAILBOX
#define SELF_CLASS(x) MN_REENTRANT_MAILBOX_CLASS(x)

#define SELF_GET_CLASS(x) MN_REENTRANT_MAILBOX_GET_CLASS(x)

/* self typedefs */
typedef MNReentrantMailbox Self;
typedef MNReentrantMailboxClass SelfClass;

/* here are local prototypes */
#line 0 "src/mn-reentrant-mailbox.gob"
static void mn_reentrant_mailbox_init (MNReentrantMailbox * o);
#line 55 "mn-reentrant-mailbox.c"
#line 0 "src/mn-reentrant-mailbox.gob"
static void mn_reentrant_mailbox_class_init (MNReentrantMailboxClass * c);
#line 58 "mn-reentrant-mailbox.c"
#line 43 "src/mn-reentrant-mailbox.gob"
static void ___1_mn_reentrant_mailbox_removed (MNMailbox * mailbox);
#line 61 "mn-reentrant-mailbox.c"
#line 54 "src/mn-reentrant-mailbox.gob"
static void mn_reentrant_mailbox_finalize (MNReentrantMailbox * self);
#line 64 "mn-reentrant-mailbox.c"
#line 76 "src/mn-reentrant-mailbox.gob"
static gboolean mn_reentrant_mailbox_queue_check_cb (gpointer data);
#line 67 "mn-reentrant-mailbox.c"
#line 87 "src/mn-reentrant-mailbox.gob"
static void ___5_mn_reentrant_mailbox_check (MNMailbox * mailbox);
#line 70 "mn-reentrant-mailbox.c"
#line 109 "src/mn-reentrant-mailbox.gob"
static void mn_reentrant_mailbox_check_thread_cb (CheckInfo * info);
#line 73 "mn-reentrant-mailbox.c"
#line 128 "src/mn-reentrant-mailbox.gob"
static void mn_reentrant_mailbox_reentrant_check (MNReentrantMailbox * self, int check_id);
#line 76 "mn-reentrant-mailbox.c"

/* pointer to the class of our parent */
static MNMailboxClass *parent_class = NULL;

/* Short form macros */
#define self_queue_check mn_reentrant_mailbox_queue_check
#define self_queue_check_cb mn_reentrant_mailbox_queue_check_cb
#define self_check_thread_cb mn_reentrant_mailbox_check_thread_cb
#define self_reentrant_check mn_reentrant_mailbox_reentrant_check
#define self_check_aborted mn_reentrant_mailbox_check_aborted
GType
mn_reentrant_mailbox_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNReentrantMailboxClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_reentrant_mailbox_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNReentrantMailbox),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_reentrant_mailbox_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_MAILBOX, "MNReentrantMailbox", &info, (GTypeFlags)G_TYPE_FLAG_ABSTRACT);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNReentrantMailbox *)g_object_new(mn_reentrant_mailbox_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNReentrantMailbox * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNReentrantMailbox *
GET_NEW_VARG (const char *first, ...)
{
	MNReentrantMailbox *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNReentrantMailbox *)g_object_new_valist (mn_reentrant_mailbox_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::finalize"
	MNReentrantMailbox *self G_GNUC_UNUSED = MN_REENTRANT_MAILBOX (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
#line 54 "src/mn-reentrant-mailbox.gob"
	mn_reentrant_mailbox_finalize (self);
#line 138 "mn-reentrant-mailbox.c"
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

static void 
mn_reentrant_mailbox_init (MNReentrantMailbox * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,MN_TYPE_REENTRANT_MAILBOX,MNReentrantMailboxPrivate);
}
#undef __GOB_FUNCTION__
static void 
mn_reentrant_mailbox_class_init (MNReentrantMailboxClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;
	MNMailboxClass *mn_mailbox_class = (MNMailboxClass *)c;

	g_type_class_add_private(c,sizeof(MNReentrantMailboxPrivate));

	parent_class = g_type_class_ref (MN_TYPE_MAILBOX);

#line 43 "src/mn-reentrant-mailbox.gob"
	mn_mailbox_class->removed = ___1_mn_reentrant_mailbox_removed;
#line 87 "src/mn-reentrant-mailbox.gob"
	mn_mailbox_class->check = ___5_mn_reentrant_mailbox_check;
#line 166 "mn-reentrant-mailbox.c"
	c->reentrant_check = NULL;
	g_object_class->finalize = ___finalize;
}
#undef __GOB_FUNCTION__



#line 43 "src/mn-reentrant-mailbox.gob"
static void 
___1_mn_reentrant_mailbox_removed (MNMailbox * mailbox G_GNUC_UNUSED)
#line 177 "mn-reentrant-mailbox.c"
#define PARENT_HANDLER(___mailbox) \
	{ if(MN_MAILBOX_CLASS(parent_class)->removed) \
		(* MN_MAILBOX_CLASS(parent_class)->removed)(___mailbox); }
{
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::removed"
{
#line 45 "src/mn-reentrant-mailbox.gob"
	
    Self *self = SELF(mailbox);

    PARENT_HANDLER(mailbox);

    /* abort the current check */
    g_atomic_int_set(&selfp->check_id, 0);
  }}
#line 193 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 54 "src/mn-reentrant-mailbox.gob"
static void 
mn_reentrant_mailbox_finalize (MNReentrantMailbox * self)
{
#line 201 "mn-reentrant-mailbox.c"
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::finalize"
{
#line 55 "src/mn-reentrant-mailbox.gob"
	
    if (selfp->queue_check_id)
      g_source_remove(selfp->queue_check_id);
  }}
#line 209 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__

#line 69 "src/mn-reentrant-mailbox.gob"
void 
mn_reentrant_mailbox_queue_check (MNReentrantMailbox * self)
{
#line 216 "mn-reentrant-mailbox.c"
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::queue_check"
#line 69 "src/mn-reentrant-mailbox.gob"
	g_return_if_fail (self != NULL);
#line 69 "src/mn-reentrant-mailbox.gob"
	g_return_if_fail (MN_IS_REENTRANT_MAILBOX (self));
#line 222 "mn-reentrant-mailbox.c"
{
#line 71 "src/mn-reentrant-mailbox.gob"
	
    if (! selfp->queue_check_id)
      selfp->queue_check_id = gdk_threads_add_idle(self_queue_check_cb, self);
  }}
#line 229 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__

#line 76 "src/mn-reentrant-mailbox.gob"
static gboolean 
mn_reentrant_mailbox_queue_check_cb (gpointer data)
{
#line 236 "mn-reentrant-mailbox.c"
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::queue_check_cb"
{
#line 78 "src/mn-reentrant-mailbox.gob"
	
    Self *self = data;

    mn_mailbox_check(MN_MAILBOX(self));

    selfp->queue_check_id = 0;
    return FALSE;		/* remove source */
  }}
#line 248 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__

#line 87 "src/mn-reentrant-mailbox.gob"
static void 
___5_mn_reentrant_mailbox_check (MNMailbox * mailbox G_GNUC_UNUSED)
#line 254 "mn-reentrant-mailbox.c"
#define PARENT_HANDLER(___mailbox) \
	{ if(MN_MAILBOX_CLASS(parent_class)->check) \
		(* MN_MAILBOX_CLASS(parent_class)->check)(___mailbox); }
{
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::check"
{
#line 89 "src/mn-reentrant-mailbox.gob"
	
    Self *self = SELF(mailbox);
    CheckInfo *info;

    PARENT_HANDLER(mailbox);

    mn_mailbox_set_error(mailbox, NULL);

    if (++selfp->check_unique_id == 0)
      ++selfp->check_unique_id;

    info = g_new(CheckInfo, 1);
    info->self = g_object_ref(self);
    info->check_id = selfp->check_unique_id;

    g_atomic_int_set(&selfp->check_id, info->check_id);

    mn_thread_create((GThreadFunc) self_check_thread_cb, info);
  }}
#line 281 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 109 "src/mn-reentrant-mailbox.gob"
static void 
mn_reentrant_mailbox_check_thread_cb (CheckInfo * info)
{
#line 289 "mn-reentrant-mailbox.c"
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::check_thread_cb"
{
#line 111 "src/mn-reentrant-mailbox.gob"
	
    Self *self = info->self;

    self_reentrant_check(self, info->check_id);

    g_atomic_int_compare_and_exchange(&selfp->check_id, info->check_id, 0);

    GDK_THREADS_ENTER();

    g_object_unref(self);

    gdk_flush();
    GDK_THREADS_LEAVE();

    g_free(info);
  }}
#line 309 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__

#line 128 "src/mn-reentrant-mailbox.gob"
static void 
mn_reentrant_mailbox_reentrant_check (MNReentrantMailbox * self, int check_id)
{
#line 316 "mn-reentrant-mailbox.c"
	MNReentrantMailboxClass *klass;
#line 128 "src/mn-reentrant-mailbox.gob"
	g_return_if_fail (self != NULL);
#line 128 "src/mn-reentrant-mailbox.gob"
	g_return_if_fail (MN_IS_REENTRANT_MAILBOX (self));
#line 128 "src/mn-reentrant-mailbox.gob"
	g_return_if_fail (check_id != 0);
#line 324 "mn-reentrant-mailbox.c"
	klass = MN_REENTRANT_MAILBOX_GET_CLASS(self);

	if(klass->reentrant_check)
		(*klass->reentrant_check)(self,check_id);
}

#line 131 "src/mn-reentrant-mailbox.gob"
gboolean 
mn_reentrant_mailbox_check_aborted (MNReentrantMailbox * self, int check_id)
{
#line 335 "mn-reentrant-mailbox.c"
#define __GOB_FUNCTION__ "MN:Reentrant:Mailbox::check_aborted"
#line 131 "src/mn-reentrant-mailbox.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 131 "src/mn-reentrant-mailbox.gob"
	g_return_val_if_fail (MN_IS_REENTRANT_MAILBOX (self), (gboolean )0);
#line 131 "src/mn-reentrant-mailbox.gob"
	g_return_val_if_fail (check_id != 0, (gboolean )0);
#line 343 "mn-reentrant-mailbox.c"
{
#line 133 "src/mn-reentrant-mailbox.gob"
	
    return g_atomic_int_get(&selfp->check_id) != check_id;
  }}
#line 349 "mn-reentrant-mailbox.c"
#undef __GOB_FUNCTION__
