/* Generated by GOB (v2.0.15)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 15

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-mail-icon-widget.h"

#include "mn-mail-icon-widget-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 24 "src/mn-mail-icon-widget.gob"

#include <math.h>
#include "mn-util.h"

#define ICON_XALIGN		0.5
#define ICON_YALIGN		0.5

#define COUNT_BOX_XPAD		3
#define COUNT_BOX_YPAD		3

#define COUNT_BOX_XMARGIN	0
#define COUNT_BOX_YMARGIN	0

#line 40 "mn-mail-icon-widget.c"
/* self casting macros */
#define SELF(x) MN_MAIL_ICON_WIDGET(x)
#define SELF_CONST(x) MN_MAIL_ICON_WIDGET_CONST(x)
#define IS_SELF(x) MN_IS_MAIL_ICON_WIDGET(x)
#define TYPE_SELF MN_TYPE_MAIL_ICON_WIDGET
#define SELF_CLASS(x) MN_MAIL_ICON_WIDGET_CLASS(x)

#define SELF_GET_CLASS(x) MN_MAIL_ICON_WIDGET_GET_CLASS(x)

/* self typedefs */
typedef MNMailIconWidget Self;
typedef MNMailIconWidgetClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
#line 0 "src/mn-mail-icon-widget.gob"
static void mn_mail_icon_widget_class_init (MNMailIconWidgetClass * c);
#line 59 "mn-mail-icon-widget.c"
#line 92 "src/mn-mail-icon-widget.gob"
static void mn_mail_icon_widget_init (MNMailIconWidget * self);
#line 62 "mn-mail-icon-widget.c"
#line 105 "src/mn-mail-icon-widget.gob"
static void mn_mail_icon_widget_dispose (MNMailIconWidget * self);
#line 65 "mn-mail-icon-widget.c"
#line 110 "src/mn-mail-icon-widget.gob"
static void ___7_mn_mail_icon_widget_size_request (GtkWidget * widget, GtkRequisition * requisition);
#line 68 "mn-mail-icon-widget.c"
#line 132 "src/mn-mail-icon-widget.gob"
static gboolean ___8_mn_mail_icon_widget_expose_event (GtkWidget * widget, GdkEventExpose * event);
#line 71 "mn-mail-icon-widget.c"
#line 244 "src/mn-mail-icon-widget.gob"
static GdkPixbuf * mn_mail_icon_widget_render_icon (MNMailIconWidget * self);
#line 74 "mn-mail-icon-widget.c"
#line 256 "src/mn-mail-icon-widget.gob"
static void mn_mail_icon_widget_context_changed (MNMailIconWidget * self);
#line 77 "mn-mail-icon-widget.c"
#line 266 "src/mn-mail-icon-widget.gob"
static void mn_mail_icon_widget_invalidate_count_layout (MNMailIconWidget * self);
#line 80 "mn-mail-icon-widget.c"
#line 276 "src/mn-mail-icon-widget.gob"
static gboolean mn_mail_icon_widget_blink_timeout_cb (gpointer data);
#line 83 "mn-mail-icon-widget.c"

enum {
	PROP_0,
	PROP_BLINKING,
	PROP_COUNT
};

/* pointer to the class of our parent */
static GtkWidgetClass *parent_class = NULL;

/* Short form macros */
#define self_get_blinking mn_mail_icon_widget_get_blinking
#define self_set_blinking mn_mail_icon_widget_set_blinking
#define self_get_count mn_mail_icon_widget_get_count
#define self_set_count mn_mail_icon_widget_set_count
#define self_render_icon mn_mail_icon_widget_render_icon
#define self_context_changed mn_mail_icon_widget_context_changed
#define self_invalidate_count_layout mn_mail_icon_widget_invalidate_count_layout
#define self_blink_timeout_cb mn_mail_icon_widget_blink_timeout_cb
#define self_new mn_mail_icon_widget_new
#define self_set_from_stock mn_mail_icon_widget_set_from_stock
GType
mn_mail_icon_widget_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNMailIconWidgetClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_mail_icon_widget_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNMailIconWidget),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_mail_icon_widget_init,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_WIDGET, "MNMailIconWidget", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNMailIconWidget *)g_object_new(mn_mail_icon_widget_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNMailIconWidget * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNMailIconWidget *
GET_NEW_VARG (const char *first, ...)
{
	MNMailIconWidget *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNMailIconWidget *)g_object_new_valist (mn_mail_icon_widget_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::dispose"
	MNMailIconWidget *self G_GNUC_UNUSED = MN_MAIL_ICON_WIDGET (obj_self);
#line 105 "src/mn-mail-icon-widget.gob"
	mn_mail_icon_widget_dispose (self);
#line 155 "mn-mail-icon-widget.c"
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 67 "src/mn-mail-icon-widget.gob"
	if(self->_priv->count_layout) { g_object_unref ((gpointer) self->_priv->count_layout); self->_priv->count_layout = NULL; }
#line 160 "mn-mail-icon-widget.c"
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::finalize"
	MNMailIconWidget *self G_GNUC_UNUSED = MN_MAIL_ICON_WIDGET (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 89 "src/mn-mail-icon-widget.gob"
	if(self->_priv->stock_id) { g_free ((gpointer) self->_priv->stock_id); self->_priv->stock_id = NULL; }
#line 175 "mn-mail-icon-widget.c"
}
#undef __GOB_FUNCTION__

static void 
mn_mail_icon_widget_class_init (MNMailIconWidgetClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;
	GtkWidgetClass *gtk_widget_class = (GtkWidgetClass *)c;

	g_type_class_add_private(c,sizeof(MNMailIconWidgetPrivate));

	parent_class = g_type_class_ref (GTK_TYPE_WIDGET);

#line 110 "src/mn-mail-icon-widget.gob"
	gtk_widget_class->size_request = ___7_mn_mail_icon_widget_size_request;
#line 132 "src/mn-mail-icon-widget.gob"
	gtk_widget_class->expose_event = ___8_mn_mail_icon_widget_expose_event;
#line 194 "mn-mail-icon-widget.c"
	g_object_class->dispose = ___dispose;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_boolean
		("blinking" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 FALSE /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_BLINKING,
		param_spec);
	param_spec = g_param_spec_int
		("count" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 G_MININT /* minimum */,
		 G_MAXINT /* maximum */,
		 0 /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_COUNT,
		param_spec);
    }
}
#undef __GOB_FUNCTION__
#line 92 "src/mn-mail-icon-widget.gob"
static void 
mn_mail_icon_widget_init (MNMailIconWidget * self G_GNUC_UNUSED)
{
#line 229 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_MAIL_ICON_WIDGET,MNMailIconWidgetPrivate);
#line 82 "src/mn-mail-icon-widget.gob"
	self->_priv->is_on = TRUE;
#line 234 "mn-mail-icon-widget.c"
 {
#line 93 "src/mn-mail-icon-widget.gob"

    GTK_WIDGET_SET_FLAGS(self, GTK_NO_WINDOW);

    gtk_widget_set_name(GTK_WIDGET(self), "mn-mail-icon");

    g_object_connect(self,
		     "swapped-signal::size-allocate", self_invalidate_count_layout, self,
		     "swapped-signal::style-set", self_context_changed, self,
		     "swapped-signal::direction-changed", self_context_changed, self,
		     NULL);
  
#line 248 "mn-mail-icon-widget.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::set_property"
{
	MNMailIconWidget *self G_GNUC_UNUSED;

	self = MN_MAIL_ICON_WIDGET (object);

	switch (property_id) {
	case PROP_BLINKING:
		{
#line 43 "src/mn-mail-icon-widget.gob"

      gboolean blinking = g_value_get_boolean(VAL);
      if (blinking != selfp->blinking)
	{
	  selfp->blinking = blinking;
	  if (blinking)
	    {
	      g_assert(selfp->blink_timeout_id == 0);
	      selfp->blink_timeout_id = gdk_threads_add_timeout(500, self_blink_timeout_cb, self);
	    }
	  else
	    {
	      g_assert(selfp->blink_timeout_id != 0);
	      mn_source_clear(&selfp->blink_timeout_id);
	      selfp->is_on = TRUE;
	      gtk_widget_queue_draw(GTK_WIDGET(self));
	    }
	}
    
#line 287 "mn-mail-icon-widget.c"
		}
		break;
	case PROP_COUNT:
		{
#line 72 "src/mn-mail-icon-widget.gob"

      int count = g_value_get_int(VAL);
      if (count != selfp->count)
	{
	  selfp->count = count;
	  self_invalidate_count_layout(self);
	  gtk_widget_queue_draw(GTK_WIDGET(self));
	}
    
#line 302 "mn-mail-icon-widget.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::get_property"
{
	MNMailIconWidget *self G_GNUC_UNUSED;

	self = MN_MAIL_ICON_WIDGET (object);

	switch (property_id) {
	case PROP_BLINKING:
		{
#line 63 "src/mn-mail-icon-widget.gob"

      g_value_set_boolean(VAL, selfp->blinking);
    
#line 335 "mn-mail-icon-widget.c"
		}
		break;
	case PROP_COUNT:
		{
#line 82 "src/mn-mail-icon-widget.gob"

      g_value_set_int(VAL, selfp->count);
    
#line 344 "mn-mail-icon-widget.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__


#line 63 "src/mn-mail-icon-widget.gob"
gboolean 
mn_mail_icon_widget_get_blinking (MNMailIconWidget * self)
{
#line 364 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::get_blinking"
{
#line 41 "src/mn-mail-icon-widget.gob"
		gboolean val; g_object_get (G_OBJECT (self), "blinking", &val, NULL); return val;
}}
#line 370 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 43 "src/mn-mail-icon-widget.gob"
void 
mn_mail_icon_widget_set_blinking (MNMailIconWidget * self, gboolean val)
{
#line 377 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::set_blinking"
{
#line 41 "src/mn-mail-icon-widget.gob"
		g_object_set (G_OBJECT (self), "blinking", val, NULL);
}}
#line 383 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 82 "src/mn-mail-icon-widget.gob"
gint 
mn_mail_icon_widget_get_count (MNMailIconWidget * self)
{
#line 390 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::get_count"
{
#line 70 "src/mn-mail-icon-widget.gob"
		gint val; g_object_get (G_OBJECT (self), "count", &val, NULL); return val;
}}
#line 396 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 72 "src/mn-mail-icon-widget.gob"
void 
mn_mail_icon_widget_set_count (MNMailIconWidget * self, gint val)
{
#line 403 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::set_count"
{
#line 70 "src/mn-mail-icon-widget.gob"
		g_object_set (G_OBJECT (self), "count", val, NULL);
}}
#line 409 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__


#line 105 "src/mn-mail-icon-widget.gob"
static void 
mn_mail_icon_widget_dispose (MNMailIconWidget * self)
{
#line 417 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::dispose"
{
#line 106 "src/mn-mail-icon-widget.gob"
	
    mn_source_clear(&selfp->blink_timeout_id);
  }}
#line 424 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 110 "src/mn-mail-icon-widget.gob"
static void 
___7_mn_mail_icon_widget_size_request (GtkWidget * widget G_GNUC_UNUSED, GtkRequisition * requisition)
#line 430 "mn-mail-icon-widget.c"
#define PARENT_HANDLER(___widget,___requisition) \
	{ if(GTK_WIDGET_CLASS(parent_class)->size_request) \
		(* GTK_WIDGET_CLASS(parent_class)->size_request)(___widget,___requisition); }
{
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::size_request"
{
#line 112 "src/mn-mail-icon-widget.gob"
	
    Self *self = SELF(widget);
    GdkPixbuf *pixbuf;

    pixbuf = self_render_icon(self);

    if (pixbuf)
      {
	requisition->width = gdk_pixbuf_get_width(pixbuf);
	requisition->height = gdk_pixbuf_get_height(pixbuf);

	g_object_unref(pixbuf);
      }
    else
      {
	requisition->width = 0;
	requisition->height = 0;
      }
  }}
#line 457 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 132 "src/mn-mail-icon-widget.gob"
static gboolean 
___8_mn_mail_icon_widget_expose_event (GtkWidget * widget G_GNUC_UNUSED, GdkEventExpose * event)
#line 464 "mn-mail-icon-widget.c"
#define PARENT_HANDLER(___widget,___event) \
	((GTK_WIDGET_CLASS(parent_class)->expose_event)? \
		(* GTK_WIDGET_CLASS(parent_class)->expose_event)(___widget,___event): \
		((gboolean )0))
{
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::expose_event"
{
#line 134 "src/mn-mail-icon-widget.gob"
	
    Self *self = SELF(widget);

    if (! GTK_WIDGET_DRAWABLE(widget) || ! selfp->stock_id)
      return FALSE;

    if (selfp->is_on)
      {
	int x;
	int y;
	GdkRectangle image_area;

	/* note: widget->requisition is the pixbuf size, see size_request() */

	x = floor(widget->allocation.x + ((widget->allocation.width - widget->requisition.width) * ICON_XALIGN));
	y = floor(widget->allocation.y + ((widget->allocation.height - widget->requisition.height) * ICON_YALIGN));

	image_area.x = x;
	image_area.y = y;
	image_area.width = widget->requisition.width;
	image_area.height = widget->requisition.height;

	if (gdk_rectangle_intersect(&event->area, &image_area, &image_area))
	  {
	    GdkPixbuf *pixbuf;

	    pixbuf = self_render_icon(self);

	    gdk_draw_pixbuf(widget->window,
			    NULL,
			    pixbuf,
			    image_area.x - x,
			    image_area.y - y,
			    image_area.x,
			    image_area.y,
			    image_area.width,
			    image_area.height,
			    GDK_RGB_DITHER_NORMAL,
			    0,
			    0);

	    g_object_unref(pixbuf);
	  }
      }

    if (selfp->count)
      {
	PangoRectangle count_rect;
	int count_x;
	int count_y;
	int box_x;
	int box_y;
	int box_width;
	int box_height;

	if (! selfp->count_layout)
	  {
	    const char *size;
	    char *markup;

	    if (widget->allocation.height < 32)
	      size = "small";
	    else
	      size = "medium";

	    selfp->count_layout = gtk_widget_create_pango_layout(widget, NULL);

	    markup = g_strdup_printf("<span size=\"%s\">%i</span>", size, selfp->count);
	    pango_layout_set_markup(selfp->count_layout, markup, -1);
	    g_free(markup);
	  }

	pango_layout_get_pixel_extents(selfp->count_layout, &count_rect, NULL);

	box_width = count_rect.width + COUNT_BOX_XPAD * 2;
	box_height = count_rect.height + COUNT_BOX_YPAD * 2;

	box_x = widget->allocation.x + widget->allocation.width - box_width - COUNT_BOX_XMARGIN;
	box_y = widget->allocation.y + widget->allocation.height - box_height - COUNT_BOX_YMARGIN;

	count_x = box_x - count_rect.x + COUNT_BOX_XPAD;
	count_y = box_y - count_rect.y + COUNT_BOX_YPAD;

	gtk_paint_box(widget->style,
		      widget->window,
		      GTK_WIDGET_STATE(widget),
		      GTK_SHADOW_OUT,
		      &event->area,
		      widget,
		      NULL,
		      box_x,
		      box_y,
		      box_width,
		      box_height);

	gtk_paint_layout(widget->style,
			 widget->window,
			 GTK_WIDGET_STATE(widget),
			 FALSE,
			 &event->area,
			 widget,
			 NULL,
			 count_x,
			 count_y,
			 selfp->count_layout);
      }

    return FALSE;
  }}
#line 582 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 244 "src/mn-mail-icon-widget.gob"
static GdkPixbuf * 
mn_mail_icon_widget_render_icon (MNMailIconWidget * self)
{
#line 590 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::render_icon"
#line 244 "src/mn-mail-icon-widget.gob"
	g_return_val_if_fail (self != NULL, (GdkPixbuf * )0);
#line 244 "src/mn-mail-icon-widget.gob"
	g_return_val_if_fail (MN_IS_MAIL_ICON_WIDGET (self), (GdkPixbuf * )0);
#line 596 "mn-mail-icon-widget.c"
{
#line 246 "src/mn-mail-icon-widget.gob"
	
    if (selfp->stock_id)
      return gtk_widget_render_icon(GTK_WIDGET(self),
				    selfp->stock_id,
				    selfp->icon_size,
				    NULL);
    else
      return NULL;
  }}
#line 608 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 256 "src/mn-mail-icon-widget.gob"
static void 
mn_mail_icon_widget_context_changed (MNMailIconWidget * self)
{
#line 615 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::context_changed"
#line 256 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (self != NULL);
#line 256 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (MN_IS_MAIL_ICON_WIDGET (self));
#line 621 "mn-mail-icon-widget.c"
{
#line 258 "src/mn-mail-icon-widget.gob"
	
    if (selfp->count_layout)
      {
	pango_layout_context_changed(selfp->count_layout);
	gtk_widget_queue_draw(GTK_WIDGET(self));
      }
  }}
#line 631 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 266 "src/mn-mail-icon-widget.gob"
static void 
mn_mail_icon_widget_invalidate_count_layout (MNMailIconWidget * self)
{
#line 638 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::invalidate_count_layout"
#line 266 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (self != NULL);
#line 266 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (MN_IS_MAIL_ICON_WIDGET (self));
#line 644 "mn-mail-icon-widget.c"
{
#line 268 "src/mn-mail-icon-widget.gob"
	
    if (selfp->count_layout)
      {
	g_object_unref(selfp->count_layout);
	selfp->count_layout = NULL;
      }
  }}
#line 654 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 276 "src/mn-mail-icon-widget.gob"
static gboolean 
mn_mail_icon_widget_blink_timeout_cb (gpointer data)
{
#line 661 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::blink_timeout_cb"
{
#line 278 "src/mn-mail-icon-widget.gob"
	
    Self *self = data;

    selfp->is_on = ! selfp->is_on;

    gtk_widget_queue_draw(GTK_WIDGET(self));

    return TRUE;
  }}
#line 674 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 288 "src/mn-mail-icon-widget.gob"
GtkWidget * 
mn_mail_icon_widget_new (void)
{
#line 681 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::new"
{
#line 290 "src/mn-mail-icon-widget.gob"
	
    return GTK_WIDGET(GET_NEW);
  }}
#line 688 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__

#line 294 "src/mn-mail-icon-widget.gob"
void 
mn_mail_icon_widget_set_from_stock (MNMailIconWidget * self, const char * stock_id, GtkIconSize icon_size)
{
#line 695 "mn-mail-icon-widget.c"
#define __GOB_FUNCTION__ "MN:Mail:Icon:Widget::set_from_stock"
#line 294 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (self != NULL);
#line 294 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (MN_IS_MAIL_ICON_WIDGET (self));
#line 294 "src/mn-mail-icon-widget.gob"
	g_return_if_fail (stock_id != NULL);
#line 703 "mn-mail-icon-widget.c"
{
#line 298 "src/mn-mail-icon-widget.gob"
	
    g_free(selfp->stock_id);
    selfp->stock_id = g_strdup(stock_id);
    selfp->icon_size = icon_size;

    /* affects the size request: call queue_resize(), not queue_draw() */
    gtk_widget_queue_resize(GTK_WIDGET(self));
  }}
#line 714 "mn-mail-icon-widget.c"
#undef __GOB_FUNCTION__
