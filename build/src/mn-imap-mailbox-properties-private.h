/* Generated by GOB (v2.0.15)   (do not edit directly) */

#ifndef __MN_IMAP_MAILBOX_PROPERTIES_PRIVATE_H__
#define __MN_IMAP_MAILBOX_PROPERTIES_PRIVATE_H__

#include "mn-imap-mailbox-properties.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 24 "src/mn-imap-mailbox-properties.gob"

#include "mn-imap-mailbox.h"

#line 18 "mn-imap-mailbox-properties-private.h"
struct _MNIMAPMailboxPropertiesPrivate {
#line 41 "src/mn-imap-mailbox-properties.gob"
	GtkWidget * inbox_radio;
#line 42 "src/mn-imap-mailbox-properties.gob"
	GtkWidget * other_radio;
#line 43 "src/mn-imap-mailbox-properties.gob"
	GtkWidget * mailbox_entry;
#line 44 "src/mn-imap-mailbox-properties.gob"
	GtkWidget * use_idle_radio[MN_IMAP_MAILBOX_N_USE_IDLE];
#line 28 "mn-imap-mailbox-properties-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
