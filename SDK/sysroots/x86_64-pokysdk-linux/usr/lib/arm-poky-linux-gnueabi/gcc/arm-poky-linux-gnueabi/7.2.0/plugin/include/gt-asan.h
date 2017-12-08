/* Type information for asan.c.
   Copyright (C) 2004-2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_asan_h[] = {
  {
    &asan_ctor_statements,
    1,
    sizeof (asan_ctor_statements),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &asan_detect_stack_use_after_return,
    1,
    sizeof (asan_detect_stack_use_after_return),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &shadow_ptr_types[0],
    1 * (3),
    sizeof (shadow_ptr_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

