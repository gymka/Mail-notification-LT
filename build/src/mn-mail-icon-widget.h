/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_MAIL_ICON_WIDGET_H__
#define __MN_MAIL_ICON_WIDGET_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAIL_ICON_WIDGET	(mn_mail_icon_widget_get_type())
#define MN_MAIL_ICON_WIDGET(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_icon_widget_get_type(), MNMailIconWidget)
#define MN_MAIL_ICON_WIDGET_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_icon_widget_get_type(), MNMailIconWidget const)
#define MN_MAIL_ICON_WIDGET_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mail_icon_widget_get_type(), MNMailIconWidgetClass)
#define MN_IS_MAIL_ICON_WIDGET(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mail_icon_widget_get_type ())

#define MN_MAIL_ICON_WIDGET_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mail_icon_widget_get_type(), MNMailIconWidgetClass)

/* Private structure type */
typedef struct _MNMailIconWidgetPrivate MNMailIconWidgetPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAIL_ICON_WIDGET__
#define __TYPEDEF_MN_MAIL_ICON_WIDGET__
typedef struct _MNMailIconWidget MNMailIconWidget;
#endif
struct _MNMailIconWidget {
	GtkWidget __parent__;
	/*< private >*/
	MNMailIconWidgetPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailIconWidgetClass MNMailIconWidgetClass;
struct _MNMailIconWidgetClass {
	GtkWidgetClass __parent__;
};


/*
 * Public methods
 */
GType	mn_mail_icon_widget_get_type	(void) G_GNUC_CONST;
#line 63 "src/mn-mail-icon-widget.gob"
gboolean 	mn_mail_icon_widget_get_blinking	(MNMailIconWidget * self);
#line 60 "mn-mail-icon-widget.h"
#line 43 "src/mn-mail-icon-widget.gob"
void 	mn_mail_icon_widget_set_blinking	(MNMailIconWidget * self,
					gboolean val);
#line 64 "mn-mail-icon-widget.h"
#line 82 "src/mn-mail-icon-widget.gob"
gint 	mn_mail_icon_widget_get_count	(MNMailIconWidget * self);
#line 67 "mn-mail-icon-widget.h"
#line 72 "src/mn-mail-icon-widget.gob"
void 	mn_mail_icon_widget_set_count	(MNMailIconWidget * self,
					gint val);
#line 71 "mn-mail-icon-widget.h"
#line 288 "src/mn-mail-icon-widget.gob"
GtkWidget * 	mn_mail_icon_widget_new	(void);
#line 74 "mn-mail-icon-widget.h"
#line 294 "src/mn-mail-icon-widget.gob"
void 	mn_mail_icon_widget_set_from_stock	(MNMailIconWidget * self,
					const char * stock_id,
					GtkIconSize icon_size);
#line 79 "mn-mail-icon-widget.h"

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_MAIL_ICON_WIDGET_PROP_BLINKING(arg)    	"blinking", __extension__ ({gboolean z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_GET_PROP_BLINKING(arg)	"blinking", __extension__ ({gboolean *z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_PROP_COUNT(arg)    	"count", __extension__ ({gint z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_GET_PROP_COUNT(arg)	"count", __extension__ ({gint *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_MAIL_ICON_WIDGET_PROP_BLINKING(arg)    	"blinking",(gboolean )(arg)
#define MN_MAIL_ICON_WIDGET_GET_PROP_BLINKING(arg)	"blinking",(gboolean *)(arg)
#define MN_MAIL_ICON_WIDGET_PROP_COUNT(arg)    	"count",(gint )(arg)
#define MN_MAIL_ICON_WIDGET_GET_PROP_COUNT(arg)	"count",(gint *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
