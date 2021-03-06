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
 
constexpr size_t AtmosphereLogoWidth = {0};
constexpr size_t AtmosphereLogoHeight = {1};

static constexpr u16 AtmosphereLogoData[] = {2};

static_assert(util::size(AtmosphereLogoData) == AtmosphereLogoWidth * AtmosphereLogoHeight, "Logo definition!");