/* Copyright 2024 Jonathan Frankel
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once


/* Used to set host for remote KB if VUSB detect doesn't work. */
// #define KEYBOARD_HOST // Force host mode
// #define KEYBOARD_REMOTE // Force remote mode

// Workaround for freezing after MacOS sleep
#define NO_USB_STARTUP_CHECK

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10
#define MATRIX_MUX_COLS 3
#define MATRIX_MUX_SIDE 1

/*
 * Keyboard Matrix Assignments
 * The skeletonkey uses two demultiplexer for the cols and hands.
 * See matrix.c for more details.
*/
#define MATRIX_ROW_PINS { GP22, GP26, GP27, GP28 }
#define MATRIX_COL_MUX_PINS { GP16, GP17, GP18 }
#define MATRIX_SIDE_MUX_PIN { GP15 }
#define MATRIX_COL_PINS { }
