/*
 * Copyright (c) 2017-2021 Michael Chaban. All rights reserved.
 * Original game is written by Core Design Ltd. in 1997.
 * Lara Croft and Tomb Raider are trademarks of Square Enix Ltd.
 *
 * This file is part of TR2Main.
 *
 * TR2Main is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TR2Main is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TR2Main.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TEXTURE_UTILS_H_INCLUDED
#define TEXTURE_UTILS_H_INCLUDED

#include "global/types.h"

/*
 * Function list
 */
#ifdef FEATURE_HUD_IMPROVED
bool LoadButtonSprites();
bool GetTextSpriteByName(const char *name, int nameLen, DWORD *sprite, int *spacing);
#endif // FEATURE_HUD_IMPROVED

int MakeCustomTexture(DWORD x, DWORD y, DWORD width, DWORD height, DWORD pitch, DWORD side, DWORD bpp, BYTE *bitmap, RGB888 *bmpPal, int hwrPal, BYTE *swrBuf, bool keyColor);

#endif // TEXTURE_UTILS_H_INCLUDED
