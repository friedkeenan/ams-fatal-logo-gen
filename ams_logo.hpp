/*
 * Copyright (c) 2018-2019 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once
#define AMS_LOGO_WIDTH {0}
#define AMS_LOGO_HEIGHT {1}

static constexpr u16 AMS_LOGO_BIN[] = {2};

static_assert(sizeof(AMS_LOGO_BIN) == AMS_LOGO_WIDTH * AMS_LOGO_HEIGHT * sizeof(*AMS_LOGO_BIN), "Logo definition!");