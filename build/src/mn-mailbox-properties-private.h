/* Generated by GOB (v2.0.15)   (do not edit directly) */

#ifndef __MN_MAILBOX_PROPERTIES_PRIVATE_H__
#define __MN_MAILBOX_PROPERTIES_PRIVATE_H__

#include "mn-mailbox-properties.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct _MNMailboxPropertiesPrivate {
#line 44 "src/mn-mailbox-properties.gob"
	GSList * general_sections;
#line 16 "mn-mailbox-properties-private.h"
};
#line 77 "src/mn-mailbox-properties.gob"
GtkWidget * 	mn_mailbox_properties_add_general_section	(MNMailboxProperties * self, const char * title);
#line 20 "mn-mailbox-properties-private.h"
#line 111 "src/mn-mailbox-properties.gob"
void 	mn_mailbox_properties_notify_complete	(MNMailboxProperties * self);
#line 23 "mn-mailbox-properties-private.h"
#line 117 "src/mn-mailbox-properties.gob"
void 	mn_mailbox_properties_notify_default_name	(MNMailboxProperties * self);
#line 26 "mn-mailbox-properties-private.h"
#line 123 "src/mn-mailbox-properties.gob"
void 	mn_mailbox_properties_notify_default_check_delay	(MNMailboxProperties * self);
#line 29 "mn-mailbox-properties-private.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
