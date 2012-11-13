/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-message-view.h"

#include "mn-message-view-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 29 "src/mn-message-view.gob"

#include "mn-util.h"
#include <glib/gi18n.h>

typedef struct
{
  MNMessageView		*self;
  MNTextTableCell	*cell;
  GList			*link;
  time_t		past_time;
} PastTimeCell;

/* use a GQueue for O(1) append and removal */
static GQueue past_time_cells = G_QUEUE_INIT;
static unsigned int past_time_cells_timeout_id = 0;

#line 43 "mn-message-view.c"
/* self casting macros */
#define SELF(x) MN_MESSAGE_VIEW(x)
#define SELF_CONST(x) MN_MESSAGE_VIEW_CONST(x)
#define IS_SELF(x) MN_IS_MESSAGE_VIEW(x)
#define TYPE_SELF MN_TYPE_MESSAGE_VIEW
#define SELF_CLASS(x) MN_MESSAGE_VIEW_CLASS(x)

#define SELF_GET_CLASS(x) MN_MESSAGE_VIEW_GET_CLASS(x)

/* self typedefs */
typedef MNMessageView Self;
typedef MNMessageViewClass SelfClass;

/* here are local prototypes */
#line 0 "src/mn-message-view.gob"
static void mn_message_view_init (MNMessageView * o);
#line 60 "mn-message-view.c"
#line 0 "src/mn-message-view.gob"
static void mn_message_view_class_init (MNMessageViewClass * c);
#line 63 "mn-message-view.c"
#line 50 "src/mn-message-view.gob"
static void mn_message_view_finalize (MNMessageView * self);
#line 66 "mn-message-view.c"
#line 55 "src/mn-message-view.gob"
static void ___2_mn_message_view_clear (MNTextTable * table);
#line 69 "mn-message-view.c"
#line 85 "src/mn-message-view.gob"
static void mn_message_view_append_header (MNMessageView * self);
#line 72 "mn-message-view.c"
#line 88 "src/mn-message-view.gob"
static void mn_message_view_append_message (MNMessageView * self, MNMessage * message, time_t now);
#line 75 "mn-message-view.c"
#line 91 "src/mn-message-view.gob"
static void mn_message_view_append_message_separator (MNMessageView * self);
#line 78 "mn-message-view.c"
#line 115 "src/mn-message-view.gob"
static void mn_message_view_clear_past_time_cells (MNMessageView * self);
#line 81 "mn-message-view.c"
#line 137 "src/mn-message-view.gob"
static void mn_message_view_install_past_time_cells_timeout (void);
#line 84 "mn-message-view.c"
#line 149 "src/mn-message-view.gob"
static gboolean mn_message_view_update_past_time_cells_cb (gpointer data);
#line 87 "mn-message-view.c"
#line 163 "src/mn-message-view.gob"
static void mn_message_view_update_past_time_cell (PastTimeCell * pcell, time_t now);
#line 90 "mn-message-view.c"

/* pointer to the class of our parent */
static MNTextTableClass *parent_class = NULL;

/* Short form macros */
#define self_set_messages mn_message_view_set_messages
#define self_append_header mn_message_view_append_header
#define self_append_message mn_message_view_append_message
#define self_append_message_separator mn_message_view_append_message_separator
#define self_append_past_time_cell mn_message_view_append_past_time_cell
#define self_clear_past_time_cells mn_message_view_clear_past_time_cells
#define self_install_past_time_cells_timeout mn_message_view_install_past_time_cells_timeout
#define self_update_past_time_cells_cb mn_message_view_update_past_time_cells_cb
#define self_update_past_time_cell mn_message_view_update_past_time_cell
GType
mn_message_view_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNMessageViewClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_message_view_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNMessageView),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_message_view_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_TEXT_TABLE, "MNMessageView", &info, (GTypeFlags)G_TYPE_FLAG_ABSTRACT);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNMessageView *)g_object_new(mn_message_view_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNMessageView * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNMessageView *
GET_NEW_VARG (const char *first, ...)
{
	MNMessageView *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNMessageView *)g_object_new_valist (mn_message_view_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Message:View::finalize"
	MNMessageView *self G_GNUC_UNUSED = MN_MESSAGE_VIEW (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
#line 50 "src/mn-message-view.gob"
	mn_message_view_finalize (self);
#line 156 "mn-message-view.c"
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

static void 
mn_message_view_init (MNMessageView * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Message:View::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,MN_TYPE_MESSAGE_VIEW,MNMessageViewPrivate);
}
#undef __GOB_FUNCTION__
static void 
mn_message_view_class_init (MNMessageViewClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Message:View::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;
	MNTextTableClass *mn_text_table_class = (MNTextTableClass *)c;

	g_type_class_add_private(c,sizeof(MNMessageViewPrivate));

	parent_class = g_type_class_ref (MN_TYPE_TEXT_TABLE);

#line 55 "src/mn-message-view.gob"
	mn_text_table_class->clear = ___2_mn_message_view_clear;
#line 182 "mn-message-view.c"
	c->append_header = NULL;
	c->append_message = NULL;
	c->append_message_separator = NULL;
	g_object_class->finalize = ___finalize;
}
#undef __GOB_FUNCTION__



#line 50 "src/mn-message-view.gob"
static void 
mn_message_view_finalize (MNMessageView * self)
{
#line 196 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::finalize"
{
#line 51 "src/mn-message-view.gob"
	
    self_clear_past_time_cells(self);
  }}
#line 203 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 55 "src/mn-message-view.gob"
static void 
___2_mn_message_view_clear (MNTextTable * table G_GNUC_UNUSED)
#line 209 "mn-message-view.c"
#define PARENT_HANDLER(___table) \
	{ if(MN_TEXT_TABLE_CLASS(parent_class)->clear) \
		(* MN_TEXT_TABLE_CLASS(parent_class)->clear)(___table); }
{
#define __GOB_FUNCTION__ "MN:Message:View::clear"
{
#line 57 "src/mn-message-view.gob"
	
    self_clear_past_time_cells(SELF(table));

    PARENT_HANDLER(table);
  }}
#line 222 "mn-message-view.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 63 "src/mn-message-view.gob"
void 
mn_message_view_set_messages (MNMessageView * self, GSList * messages)
{
#line 230 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::set_messages"
#line 63 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 63 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 236 "mn-message-view.c"
{
#line 65 "src/mn-message-view.gob"
	
    time_t now;
    GSList *l;

    mn_text_table_clear(MN_TEXT_TABLE(self));

    self_append_header(self);

    now = mn_time();

    MN_LIST_FOREACH(l, messages)
      {
	MNMessage *message = l->data;

	self_append_message(self, message, now);
	if (l->next)
	  self_append_message_separator(self);
      }
  }}
#line 258 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 85 "src/mn-message-view.gob"
static void 
mn_message_view_append_header (MNMessageView * self)
{
#line 265 "mn-message-view.c"
	MNMessageViewClass *klass;
#line 85 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 85 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 271 "mn-message-view.c"
	klass = MN_MESSAGE_VIEW_GET_CLASS(self);

	if(klass->append_header)
		(*klass->append_header)(self);
}

#line 88 "src/mn-message-view.gob"
static void 
mn_message_view_append_message (MNMessageView * self, MNMessage * message, time_t now)
{
#line 282 "mn-message-view.c"
	MNMessageViewClass *klass;
#line 88 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 88 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 88 "src/mn-message-view.gob"
	g_return_if_fail (message != NULL);
#line 88 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE (message));
#line 292 "mn-message-view.c"
	klass = MN_MESSAGE_VIEW_GET_CLASS(self);

	if(klass->append_message)
		(*klass->append_message)(self,message,now);
}

#line 91 "src/mn-message-view.gob"
static void 
mn_message_view_append_message_separator (MNMessageView * self)
{
#line 303 "mn-message-view.c"
	MNMessageViewClass *klass;
#line 91 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 91 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 309 "mn-message-view.c"
	klass = MN_MESSAGE_VIEW_GET_CLASS(self);

	if(klass->append_message_separator)
		(*klass->append_message_separator)(self);
}

#line 94 "src/mn-message-view.gob"
void 
mn_message_view_append_past_time_cell (MNMessageView * self, time_t past_time, time_t now)
{
#line 320 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::append_past_time_cell"
#line 94 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 94 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 326 "mn-message-view.c"
{
#line 96 "src/mn-message-view.gob"
	
    PastTimeCell *pcell;

    pcell = g_new(PastTimeCell, 1);
    pcell->self = self;
    pcell->cell = mn_text_table_append_text_cell(MN_TEXT_TABLE(self), NULL);
    pcell->link = g_list_alloc();
    pcell->link->data = pcell;
    pcell->past_time = past_time;

    self_update_past_time_cell(pcell, now);

    selfp->past_time_cells = g_slist_prepend(selfp->past_time_cells, pcell);
    g_queue_push_tail_link(&past_time_cells, pcell->link);

    if (! past_time_cells_timeout_id)
      self_install_past_time_cells_timeout();
  }}
#line 347 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 115 "src/mn-message-view.gob"
static void 
mn_message_view_clear_past_time_cells (MNMessageView * self)
{
#line 354 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::clear_past_time_cells"
#line 115 "src/mn-message-view.gob"
	g_return_if_fail (self != NULL);
#line 115 "src/mn-message-view.gob"
	g_return_if_fail (MN_IS_MESSAGE_VIEW (self));
#line 360 "mn-message-view.c"
{
#line 117 "src/mn-message-view.gob"
	
    GSList *l;

    if (! selfp->past_time_cells)
      return;

    MN_LIST_FOREACH(l, selfp->past_time_cells)
      {
	PastTimeCell *pcell = l->data;

	g_queue_delete_link(&past_time_cells, pcell->link);
	g_free(pcell);
      }

    mn_g_slist_clear(&selfp->past_time_cells);

    if (g_queue_is_empty(&past_time_cells))
      mn_source_clear(&past_time_cells_timeout_id);
  }}
#line 382 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 137 "src/mn-message-view.gob"
static void 
mn_message_view_install_past_time_cells_timeout (void)
{
#line 389 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::install_past_time_cells_timeout"
{
#line 139 "src/mn-message-view.gob"
	
    GTimeVal now;
    int timeout;

    g_get_current_time(&now);
    timeout = (G_USEC_PER_SEC - now.tv_usec) / 1000 + 1;

    past_time_cells_timeout_id = gdk_threads_add_timeout(timeout, self_update_past_time_cells_cb, NULL);
  }}
#line 402 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 149 "src/mn-message-view.gob"
static gboolean 
mn_message_view_update_past_time_cells_cb (gpointer data)
{
#line 409 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::update_past_time_cells_cb"
{
#line 151 "src/mn-message-view.gob"
	
    time_t now;
    GList *l;

    now = mn_time();
    MN_QUEUE_FOREACH(l, &past_time_cells)
      self_update_past_time_cell(l->data, now);

    self_install_past_time_cells_timeout();
    return FALSE;		/* remove source */
  }}
#line 424 "mn-message-view.c"
#undef __GOB_FUNCTION__

#line 163 "src/mn-message-view.gob"
static void 
mn_message_view_update_past_time_cell (PastTimeCell * pcell, time_t now)
{
#line 431 "mn-message-view.c"
#define __GOB_FUNCTION__ "MN:Message:View::update_past_time_cell"
#line 163 "src/mn-message-view.gob"
	g_return_if_fail (pcell != NULL);
#line 435 "mn-message-view.c"
{
#line 165 "src/mn-message-view.gob"
	
    char *formatted;

    formatted = mn_format_past_time(pcell->past_time, now);
    mn_text_table_cell_set_text(MN_TEXT_TABLE(pcell->self), pcell->cell, formatted);
    g_free(formatted);
  }}
#line 445 "mn-message-view.c"
#undef __GOB_FUNCTION__