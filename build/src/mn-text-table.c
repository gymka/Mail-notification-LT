/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-text-table.h"

#include "mn-text-table-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 36 "src/mn-text-table.gob"

#include "mn-util.h"

#define HORIZONTAL_SPACING	12
#define VERTICAL_SPACING	0

#define COLUMN_SIZE(self, column) \
  g_array_index((self)->_priv->column_sizes, int, (column))

struct _MNTextTableCell
{
  PangoLayout	*layout;	/* NULL for a blank cell */
  gboolean	dirty;
  int		width;
  int		height;
};

#line 44 "mn-text-table.c"
/* self casting macros */
#define SELF(x) MN_TEXT_TABLE(x)
#define SELF_CONST(x) MN_TEXT_TABLE_CONST(x)
#define IS_SELF(x) MN_IS_TEXT_TABLE(x)
#define TYPE_SELF MN_TYPE_TEXT_TABLE
#define SELF_CLASS(x) MN_TEXT_TABLE_CLASS(x)

#define SELF_GET_CLASS(x) MN_TEXT_TABLE_GET_CLASS(x)

/* self typedefs */
typedef MNTextTable Self;
typedef MNTextTableClass SelfClass;

/* here are local prototypes */
#line 0 "src/mn-text-table.gob"
static void mn_text_table_class_init (MNTextTableClass * c);
#line 61 "mn-text-table.c"
#line 79 "src/mn-text-table.gob"
static void mn_text_table_init (MNTextTable * self);
#line 64 "mn-text-table.c"
#line 89 "src/mn-text-table.gob"
static void mn_text_table_row_free (Row * row);
#line 67 "mn-text-table.c"
#line 96 "src/mn-text-table.gob"
static void mn_text_table_cell_free (MNTextTableCell * cell);
#line 70 "mn-text-table.c"
#line 104 "src/mn-text-table.gob"
static void ___4_mn_text_table_size_request (GtkWidget * widget, GtkRequisition * requisition);
#line 73 "mn-text-table.c"
#line 115 "src/mn-text-table.gob"
static gboolean ___5_mn_text_table_expose_event (GtkWidget * widget, GdkEventExpose * event);
#line 76 "mn-text-table.c"
#line 165 "src/mn-text-table.gob"
static void mn_text_table_set_dirty (MNTextTable * self);
#line 79 "mn-text-table.c"
#line 175 "src/mn-text-table.gob"
static void mn_text_table_context_changed (MNTextTable * self);
#line 82 "mn-text-table.c"
#line 200 "src/mn-text-table.gob"
static void mn_text_table_relayout (MNTextTable * self);
#line 85 "mn-text-table.c"
static void ___real_mn_text_table_clear (MNTextTable * self);
#line 317 "src/mn-text-table.gob"
static void mn_text_table_append_cell_real (MNTextTable * self, MNTextTableCell * cell);
#line 89 "mn-text-table.c"

/* pointer to the class of our parent */
static GtkWidgetClass *parent_class = NULL;

/* Short form macros */
#define self_row_free mn_text_table_row_free
#define self_cell_free mn_text_table_cell_free
#define self_set_dirty mn_text_table_set_dirty
#define self_context_changed mn_text_table_context_changed
#define self_relayout mn_text_table_relayout
#define self_clear mn_text_table_clear
#define self_append_text_cell mn_text_table_append_text_cell
#define self_append_text_cell_from_markup mn_text_table_append_text_cell_from_markup
#define self_append_text_cell_from_layout mn_text_table_append_text_cell_from_layout
#define self_append_blank_cell mn_text_table_append_blank_cell
#define self_append_cell_real mn_text_table_append_cell_real
#define self_cell_set_text mn_text_table_cell_set_text
#define self_line_break mn_text_table_line_break
GType
mn_text_table_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNTextTableClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_text_table_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNTextTable),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_text_table_init,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_WIDGET, "MNTextTable", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNTextTable *)g_object_new(mn_text_table_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNTextTable * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNTextTable *
GET_NEW_VARG (const char *first, ...)
{
	MNTextTable *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNTextTable *)g_object_new_valist (mn_text_table_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Text:Table::finalize"
	MNTextTable *self G_GNUC_UNUSED = MN_TEXT_TABLE (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#define rows (self->_priv->rows)
#define VAR rows
	{
#line 68 "src/mn-text-table.gob"
	 mn_g_ptr_array_free_deep_custom(VAR, (GFunc) self_row_free, NULL); }
#line 164 "mn-text-table.c"
	memset(&rows, 0, sizeof(rows));
#undef VAR
#undef rows
#define column_sizes (self->_priv->column_sizes)
#define VAR column_sizes
	{
#line 71 "src/mn-text-table.gob"
	 g_array_free(VAR, TRUE); }
#line 173 "mn-text-table.c"
	memset(&column_sizes, 0, sizeof(column_sizes));
#undef VAR
#undef column_sizes
}
#undef __GOB_FUNCTION__

static void 
mn_text_table_class_init (MNTextTableClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Text:Table::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;
	GtkWidgetClass *gtk_widget_class = (GtkWidgetClass *)c;

	g_type_class_add_private(c,sizeof(MNTextTablePrivate));

	parent_class = g_type_class_ref (GTK_TYPE_WIDGET);

#line 104 "src/mn-text-table.gob"
	gtk_widget_class->size_request = ___4_mn_text_table_size_request;
#line 115 "src/mn-text-table.gob"
	gtk_widget_class->expose_event = ___5_mn_text_table_expose_event;
#line 257 "src/mn-text-table.gob"
	c->clear = ___real_mn_text_table_clear;
#line 197 "mn-text-table.c"
	g_object_class->finalize = ___finalize;
}
#undef __GOB_FUNCTION__
#line 79 "src/mn-text-table.gob"
static void 
mn_text_table_init (MNTextTable * self G_GNUC_UNUSED)
{
#line 205 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_TEXT_TABLE,MNTextTablePrivate);
#line 67 "src/mn-text-table.gob"
	self->_priv->rows = g_ptr_array_new();
#line 210 "mn-text-table.c"
#line 70 "src/mn-text-table.gob"
	self->_priv->column_sizes = g_array_new(FALSE, TRUE, sizeof(int));
#line 213 "mn-text-table.c"
#line 71 "src/mn-text-table.gob"
	self->_priv->dirty = TRUE;
#line 216 "mn-text-table.c"
 {
#line 80 "src/mn-text-table.gob"

    GTK_WIDGET_SET_FLAGS(self, GTK_NO_WINDOW);

    g_object_connect(self,
		     "swapped-signal::style-set", self_context_changed, self,
		     "swapped-signal::direction-changed", self_context_changed, self,
		     NULL);
  
#line 227 "mn-text-table.c"
 }
}
#undef __GOB_FUNCTION__



#line 89 "src/mn-text-table.gob"
static void 
mn_text_table_row_free (Row * row)
{
#line 238 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::row_free"
#line 89 "src/mn-text-table.gob"
	g_return_if_fail (row != NULL);
#line 242 "mn-text-table.c"
{
#line 91 "src/mn-text-table.gob"
	
    mn_g_ptr_array_free_deep_custom(row->cells, (GFunc) self_cell_free, NULL);
    g_free(row);
  }}
#line 249 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 96 "src/mn-text-table.gob"
static void 
mn_text_table_cell_free (MNTextTableCell * cell)
{
#line 256 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::cell_free"
#line 96 "src/mn-text-table.gob"
	g_return_if_fail (cell != NULL);
#line 260 "mn-text-table.c"
{
#line 98 "src/mn-text-table.gob"
	
    if (cell->layout)
      g_object_unref(cell->layout);
    g_free(cell);
  }}
#line 268 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 104 "src/mn-text-table.gob"
static void 
___4_mn_text_table_size_request (GtkWidget * widget G_GNUC_UNUSED, GtkRequisition * requisition)
#line 274 "mn-text-table.c"
#define PARENT_HANDLER(___widget,___requisition) \
	{ if(GTK_WIDGET_CLASS(parent_class)->size_request) \
		(* GTK_WIDGET_CLASS(parent_class)->size_request)(___widget,___requisition); }
{
#define __GOB_FUNCTION__ "MN:Text:Table::size_request"
{
#line 106 "src/mn-text-table.gob"
	
    Self *self = SELF(widget);

    self_relayout(self);

    requisition->width = selfp->width;
    requisition->height = selfp->height;
  }}
#line 290 "mn-text-table.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 115 "src/mn-text-table.gob"
static gboolean 
___5_mn_text_table_expose_event (GtkWidget * widget G_GNUC_UNUSED, GdkEventExpose * event)
#line 297 "mn-text-table.c"
#define PARENT_HANDLER(___widget,___event) \
	((GTK_WIDGET_CLASS(parent_class)->expose_event)? \
		(* GTK_WIDGET_CLASS(parent_class)->expose_event)(___widget,___event): \
		((gboolean )0))
{
#define __GOB_FUNCTION__ "MN:Text:Table::expose_event"
{
#line 117 "src/mn-text-table.gob"
	
    Self *self = SELF(widget);
    int i;
    int y = widget->allocation.y;

    if (! GTK_WIDGET_DRAWABLE(widget))
      return FALSE;

    self_relayout(self);

    MN_ARRAY_FOREACH(i, selfp->rows)
      {
	Row *row = g_ptr_array_index(selfp->rows, i);
	int j;
	int x = widget->allocation.x;
	int column = 0;

	MN_ARRAY_FOREACH(j, row->cells)
	  {
	    MNTextTableCell *cell = g_ptr_array_index(row->cells, j);

	    if (cell->layout)
	      gtk_paint_layout(widget->style,
			       widget->window,
			       GTK_WIDGET_STATE(widget),
			       FALSE,
			       &event->area,
			       widget,
			       NULL,
			       x,
			       y + row->height - cell->height,
			       cell->layout);

	    x += COLUMN_SIZE(self, column);
	    if (j < row->cells->len - 1)
	      x += HORIZONTAL_SPACING;

	    column++;
	  }

	y += row->height;
	if (i < selfp->rows->len - 1)
	  y += VERTICAL_SPACING;
      }

    return FALSE;
  }}
#line 353 "mn-text-table.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 165 "src/mn-text-table.gob"
static void 
mn_text_table_set_dirty (MNTextTable * self)
{
#line 361 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::set_dirty"
#line 165 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 165 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 367 "mn-text-table.c"
{
#line 167 "src/mn-text-table.gob"
	
    if (! selfp->dirty)
      {
	selfp->dirty = TRUE;
	gtk_widget_queue_resize(GTK_WIDGET(self));
      }
  }}
#line 377 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 175 "src/mn-text-table.gob"
static void 
mn_text_table_context_changed (MNTextTable * self)
{
#line 384 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::context_changed"
#line 175 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 175 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 390 "mn-text-table.c"
{
#line 177 "src/mn-text-table.gob"
	
    int i;

    MN_ARRAY_FOREACH(i, selfp->rows)
      {
	Row *row = g_ptr_array_index(selfp->rows, i);
	int j;

	MN_ARRAY_FOREACH(j, row->cells)
	  {
	    MNTextTableCell *cell = g_ptr_array_index(row->cells, j);

	    if (cell->layout)
	      {
		pango_layout_context_changed(cell->layout);
		cell->dirty = TRUE;
	      }
	  }
      }

    self_set_dirty(self);
  }}
#line 415 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 200 "src/mn-text-table.gob"
static void 
mn_text_table_relayout (MNTextTable * self)
{
#line 422 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::relayout"
#line 200 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 200 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 428 "mn-text-table.c"
{
#line 202 "src/mn-text-table.gob"
	
    int i;

    if (! selfp->dirty)
      return;

    selfp->width = 0;
    selfp->height = 0;

    MN_ARRAY_FOREACH(i, selfp->column_sizes)
      COLUMN_SIZE(self, i) = 0;

    MN_ARRAY_FOREACH(i, selfp->rows)
      {
	Row *row = g_ptr_array_index(selfp->rows, i);
	int j;

	row->height = 0;

	MN_ARRAY_FOREACH(j, row->cells)
	  {
	    MNTextTableCell *cell = g_ptr_array_index(row->cells, j);
	    int n_columns = j + 1;

	    if (cell->dirty)
	      {
		g_assert(cell->layout != NULL);

		pango_layout_get_pixel_size(cell->layout, &cell->width, &cell->height);
		cell->dirty = FALSE;
	      }

	    if (n_columns > selfp->column_sizes->len)
	      g_array_set_size(selfp->column_sizes, n_columns);

	    if (cell->width > COLUMN_SIZE(self, j))
	      COLUMN_SIZE(self, j) = cell->width;
	    if (cell->height > row->height)
	      row->height = cell->height;
	  }

	selfp->height += row->height;
      }

    MN_ARRAY_FOREACH(i, selfp->column_sizes)
      selfp->width += COLUMN_SIZE(self, i);

    if (selfp->column_sizes->len > 1)
      selfp->width += HORIZONTAL_SPACING * (selfp->column_sizes->len - 1);
    if (selfp->rows->len > 1)
      selfp->height += VERTICAL_SPACING * (selfp->rows->len - 1);

    selfp->dirty = FALSE;
  }}
#line 485 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 257 "src/mn-text-table.gob"
void 
mn_text_table_clear (MNTextTable * self)
{
#line 492 "mn-text-table.c"
	MNTextTableClass *klass;
#line 257 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 257 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 498 "mn-text-table.c"
	klass = MN_TEXT_TABLE_GET_CLASS(self);

	if(klass->clear)
		(*klass->clear)(self);
}
#line 257 "src/mn-text-table.gob"
static void 
___real_mn_text_table_clear (MNTextTable * self G_GNUC_UNUSED)
{
#line 508 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::clear"
{
#line 259 "src/mn-text-table.gob"
	
    mn_g_ptr_array_free_deep_custom(selfp->rows, (GFunc) self_row_free, NULL);
    selfp->rows = g_ptr_array_new();

    g_array_set_size(selfp->column_sizes, 0);

    selfp->row = NULL;

    self_set_dirty(self);
  }}
#line 522 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 270 "src/mn-text-table.gob"
MNTextTableCell * 
mn_text_table_append_text_cell (MNTextTable * self, const char * text)
{
#line 529 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::append_text_cell"
#line 270 "src/mn-text-table.gob"
	g_return_val_if_fail (self != NULL, (MNTextTableCell * )0);
#line 270 "src/mn-text-table.gob"
	g_return_val_if_fail (MN_IS_TEXT_TABLE (self), (MNTextTableCell * )0);
#line 535 "mn-text-table.c"
{
#line 272 "src/mn-text-table.gob"
	
    return self_append_text_cell_from_layout(self, gtk_widget_create_pango_layout(GTK_WIDGET(self), text));
  }}
#line 541 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 276 "src/mn-text-table.gob"
MNTextTableCell * 
mn_text_table_append_text_cell_from_markup (MNTextTable * self, const char * markup)
{
#line 548 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::append_text_cell_from_markup"
#line 276 "src/mn-text-table.gob"
	g_return_val_if_fail (self != NULL, (MNTextTableCell * )0);
#line 276 "src/mn-text-table.gob"
	g_return_val_if_fail (MN_IS_TEXT_TABLE (self), (MNTextTableCell * )0);
#line 276 "src/mn-text-table.gob"
	g_return_val_if_fail (markup != NULL, (MNTextTableCell * )0);
#line 556 "mn-text-table.c"
{
#line 278 "src/mn-text-table.gob"
	
    PangoLayout *layout;

    layout = gtk_widget_create_pango_layout(GTK_WIDGET(self), NULL);
    pango_layout_set_markup(layout, markup, -1);

    return self_append_text_cell_from_layout(self, layout);
  }}
#line 567 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 287 "src/mn-text-table.gob"
MNTextTableCell * 
mn_text_table_append_text_cell_from_layout (MNTextTable * self, PangoLayout * layout)
{
#line 574 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::append_text_cell_from_layout"
#line 287 "src/mn-text-table.gob"
	g_return_val_if_fail (self != NULL, (MNTextTableCell * )0);
#line 287 "src/mn-text-table.gob"
	g_return_val_if_fail (MN_IS_TEXT_TABLE (self), (MNTextTableCell * )0);
#line 287 "src/mn-text-table.gob"
	g_return_val_if_fail (layout != NULL, (MNTextTableCell * )0);
#line 582 "mn-text-table.c"
{
#line 289 "src/mn-text-table.gob"
	
    MNTextTableCell *cell;

    cell = g_new(MNTextTableCell, 1);
    cell->layout = layout;
    cell->dirty = TRUE;

    self_append_cell_real(self, cell);

    return cell;
  }}
#line 596 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 301 "src/mn-text-table.gob"
MNTextTableCell * 
mn_text_table_append_blank_cell (MNTextTable * self, int width, int height)
{
#line 603 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::append_blank_cell"
#line 301 "src/mn-text-table.gob"
	g_return_val_if_fail (self != NULL, (MNTextTableCell * )0);
#line 301 "src/mn-text-table.gob"
	g_return_val_if_fail (MN_IS_TEXT_TABLE (self), (MNTextTableCell * )0);
#line 609 "mn-text-table.c"
{
#line 303 "src/mn-text-table.gob"
	
    MNTextTableCell *cell;

    cell = g_new(MNTextTableCell, 1);
    cell->layout = NULL;
    cell->dirty = FALSE;
    cell->width = width;
    cell->height = height;

    self_append_cell_real(self, cell);

    return cell;
  }}
#line 625 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 317 "src/mn-text-table.gob"
static void 
mn_text_table_append_cell_real (MNTextTable * self, MNTextTableCell * cell)
{
#line 632 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::append_cell_real"
#line 317 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 317 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 638 "mn-text-table.c"
{
#line 319 "src/mn-text-table.gob"
	
    if (! selfp->row)
      {
	selfp->row = g_new(Row, 1);
	selfp->row->cells = g_ptr_array_new();

	g_ptr_array_add(selfp->rows, selfp->row);
      }

    g_ptr_array_add(selfp->row->cells, cell);

    self_set_dirty(self);
  }}
#line 654 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 333 "src/mn-text-table.gob"
void 
mn_text_table_cell_set_text (MNTextTable * self, MNTextTableCell * cell, const char * text)
{
#line 661 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::cell_set_text"
#line 333 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 333 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 333 "src/mn-text-table.gob"
	g_return_if_fail (cell != NULL);
#line 333 "src/mn-text-table.gob"
	g_return_if_fail (text != NULL);
#line 671 "mn-text-table.c"
{
#line 337 "src/mn-text-table.gob"
	
    const char *current_text;

    g_return_if_fail(cell->layout != NULL);

    current_text = pango_layout_get_text(cell->layout);
    if (! current_text || strcmp(current_text, text))
      {
	pango_layout_set_text(cell->layout, text, -1);
	cell->dirty = TRUE;
	self_set_dirty(self);
      }
  }}
#line 687 "mn-text-table.c"
#undef __GOB_FUNCTION__

#line 351 "src/mn-text-table.gob"
void 
mn_text_table_line_break (MNTextTable * self)
{
#line 694 "mn-text-table.c"
#define __GOB_FUNCTION__ "MN:Text:Table::line_break"
#line 351 "src/mn-text-table.gob"
	g_return_if_fail (self != NULL);
#line 351 "src/mn-text-table.gob"
	g_return_if_fail (MN_IS_TEXT_TABLE (self));
#line 700 "mn-text-table.c"
{
#line 353 "src/mn-text-table.gob"
	
    selfp->row = NULL;
  }}
#line 706 "mn-text-table.c"
#undef __GOB_FUNCTION__
