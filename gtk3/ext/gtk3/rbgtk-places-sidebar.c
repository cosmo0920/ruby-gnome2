/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2014 Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#include "rbgtk3private.h"

#if GTK_CHECK_VERSION(3, 10, 0)

#define RG_TARGET_NAMESPACE cPlacesSidebar

static VALUE
rg_initialize(VALUE self)
{
    RBGTK_INITIALIZE(self, gtk_places_sidebar_new());
    return Qnil;
}

void
Init_gtk_places_sidebar(VALUE mGtk)
{
    VALUE RG_TARGET_NAMESPACE = G_DEF_CLASS(GTK_TYPE_PLACES_SIDEBAR, "PlacesSidebar", mGtk);

    G_DEF_CLASS(GTK_TYPE_PLACES_OPEN_FLAGS, "OpenFlags", RG_TARGET_NAMESPACE);
    RG_DEF_METHOD(initialize, 0);
}
#endif
