/*
 * Mail Notification
 * Copyright (C) 2003-2008 Jean-Yves Lefort <jylefort@brutele.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _MN_XML_H
#define _MN_XML_H

#include <glib-object.h>
#include <libxml/tree.h>

typedef enum
{
  /* import this property in mn_xml_import_properties() */
  MN_XML_PARAM_IMPORT		= 1 << (G_PARAM_USER_SHIFT + 0),

  /* export this property in mn_xml_export_properties() */
  MN_XML_PARAM_EXPORT		= 1 << (G_PARAM_USER_SHIFT + 1),

  /* import and export this property */
  MN_XML_PARAM_IMPORT_EXPORT	= MN_XML_PARAM_IMPORT | MN_XML_PARAM_EXPORT,

  /* ignore the case of a string property when checking if it has the default value */
  MN_XML_PARAM_IGNORE_CASE	= 1 << (G_PARAM_USER_SHIFT + 2)
} MNXMLParamFlags;

#define MN_XML_PARAM_USER_SHIFT		(G_PARAM_USER_SHIFT + 3)

void mn_xml_import_properties (GObject *object, xmlNode *node);
void mn_xml_export_properties (GObject *object, xmlNode *node);

#endif /* _MN_XML_H */
