# Copyright (C) 2013  Ruby-GNOME2 Project Team
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

require "test-unit"
require "test/unit/notify"

require "webkit-gtk-test-utils/omissions"

module WebKitGtkTestUtils
   def later_version?(major, minor, micro=nil)
     micro ||= 0
     webkit_gtk_version = [
       WebkitGtk::MAJOR_VERSION,
       WebkitGtk::MINOR_VERSION,
       WebkitGtk::MICRO_VERSION,
     ]
     (webkit_gtk_version <=> [major, minor, micro]) >= 0
   end

   def only_webkit_gtk_version(major, minor, micro=nil)
     micro ||= 0
     unless later_version?(major, minor, micro)
       omit("Require WebKitGtk >= #{major}.#{minor}.#{micro}")
     end
   end
end
