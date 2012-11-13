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

#ifndef _MN_EVOLUTION_PLUGIN_H
#define _MN_EVOLUTION_PLUGIN_H

#include <glib-object.h>

gboolean mn_evolution_plugin_register_server (GObject *server,
					      const char *service,
					      const char *path,
					      GError **err);
gboolean mn_evolution_plugin_unregister_server (const char *service,
						GError **err);

#endif /* _MN_EVOLUTION_PLUGIN_H */
