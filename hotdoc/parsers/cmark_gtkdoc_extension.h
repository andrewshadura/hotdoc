/*
 * CMark syntax extension for gtk-doc
 *
 * Copyright 2016 Mathieu Duponchelle <mathieu.duponchelle@opencredd.com>
 * Copyright 2016 Collabora Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __CMARK_GTKDOC_EXTENSION_H
#define __CMARK_GTKDOC_EXTENSION_H

#include "cmark.h"
#include "cmark_module_utils.h"

typedef NamedLink * (*CMarkGtkDocLinkResolveFunc) (const char *id);

cmark_syntax_extension *cmark_gtkdoc_extension_new();
void cmark_gtkdoc_extension_set_link_resolve_function(
    cmark_syntax_extension *ext,
    CMarkGtkDocLinkResolveFunc func);

#endif
