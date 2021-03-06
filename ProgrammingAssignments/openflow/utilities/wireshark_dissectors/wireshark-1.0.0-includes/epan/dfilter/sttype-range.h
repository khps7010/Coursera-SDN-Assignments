/*
 * $Id: sttype-range.h 3992 2008-06-10 03:13:11Z dgu $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 2001 Gerald Combs
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef STTYPE_RANGE_H
#define STTYPE_RANGE_H

#include "syntax-tree.h"
#include "drange.h"

STTYPE_ACCESSOR_PROTOTYPE(header_field_info*, range, hfinfo)
STTYPE_ACCESSOR_PROTOTYPE(drange*, range, drange)

/* Set a range */
void
sttype_range_set(stnode_t *node, stnode_t *field, GSList* drange_list);

void
sttype_range_set1(stnode_t *node, stnode_t *field, drange_node *rn);

/* Clear the 'drange' variable to remove responsibility for
 * freeing it. */
void
sttype_range_remove_drange(stnode_t *node);

#endif
