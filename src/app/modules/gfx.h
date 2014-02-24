/* Aseprite
 * Copyright (C) 2001-2013  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef APP_MODULES_GFX_H_INCLUDED
#define APP_MODULES_GFX_H_INCLUDED

#include "app/color.h"
#include "gfx/rect.h"
#include "ui/base.h"
#include "ui/color.h"
#include "ui/graphics.h"

struct FONT;
struct BITMAP;

namespace app {
  using namespace raster;

  void dotted_mode(int offset);

  void draw_color_button(ui::Graphics* g,
                         const gfx::Rect& rc,
                         bool outer_nw, bool outer_n, bool outer_ne, bool outer_e,
                         bool outer_se, bool outer_s, bool outer_sw, bool outer_w,
                         PixelFormat pixelFormat, const app::Color& color,
                         bool hot, bool drag);

} // namespace app

#endif
