/*  Copyright 2024 Pretendo Network contributors <pretendo.network>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*

  I feel like i need to put this here.

  This code has been added so that it could make the eshop work with our eshop version (also known as ReeShop).
  The rest of the code is Pretendo Network Contributors Work. I did not work on this, i only found it and made it work
  All Credits go to the Pretendo Network Contributors who worked hard on this.

  - Thom

*/

#pragma once

#ifndef BASEURL_REESHOP
// depricated, since well it didnt work like i intended it.
#define BASEURL_REESHOP "reeshop.net"

#endif

void patchEshop();
void unpatchEshop();
