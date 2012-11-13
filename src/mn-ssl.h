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

#ifndef _MN_SSL_H
#define _MN_SSL_H

#include <glib.h>
#include <openssl/ssl.h>

G_LOCK_EXTERN(mn_ssl);

SSL_CTX *mn_ssl_init (GError **err);

const char *mn_ssl_get_error (void);
const char *mn_ssl_get_io_error (const SSL *ssl, int ret);

#endif /* _MN_SSL_H */
