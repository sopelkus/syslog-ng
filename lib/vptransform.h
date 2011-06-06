/*
 * Copyright (c) 2002-2011 BalaBit IT Ltd, Budapest, Hungary
 * Copyright (c) 2011 Gergely Nagy <algernon@balabit.hu>
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef VPTRANSFORM_INCLUDED
#define VPTRANSFORM_INCLUDED 1

#include "value-pairs.h"

typedef struct _ValuePairsTransform ValuePairsTransform;

ValuePairsTransform *value_pairs_new_transform_add_prefix (const gchar *glob, const gchar *prefix);
ValuePairsTransform *value_pairs_new_transform_shift (const gchar *glob, gint amount);
ValuePairsTransform *value_pairs_new_transform_replace(const gchar *prefix, const gchar *new_prefix);

void value_pairs_transform_free(ValuePairsTransform *t);
gchar *value_pairs_transform_apply(ValuePairsTransform *t, gchar *key);
void value_pairs_transform_reset(ValuePairsTransform *t);

#endif
