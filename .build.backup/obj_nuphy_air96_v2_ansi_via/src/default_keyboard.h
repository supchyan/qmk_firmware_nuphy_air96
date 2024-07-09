// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "quantum.h"

// Layout content

#define LAYOUT(k0A, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k0O, k2O, k1P, k2P, k1Q, k2Q, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k1R, k1S, k1T, k1U, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k2R, k2S, k2T, k2U, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3N, k3R, k3S, k3T, k4A, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, k4N, k4P, k4R, k4S, k4T, k4U, k5A, k5B, k5C, k5G, k5J, k5K, k5N, k5O, k5P, k5Q, k5R, k5T) { \
	 {k0A, KC_NO, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k0O, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, KC_NO, k1P, k1Q, k1R, k1S, k1T, k1U}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k2O, k2P, k2Q, k2R, k2S, k2T, k2U}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, KC_NO, k3N, KC_NO, KC_NO, KC_NO, k3R, k3S, k3T, KC_NO}, \
	 {k4A, KC_NO, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, KC_NO, k4N, KC_NO, k4P, KC_NO, k4R, k4S, k4T, k4U}, \
	 {k5A, k5B, k5C, KC_NO, KC_NO, KC_NO, k5G, KC_NO, KC_NO, k5J, k5K, KC_NO, KC_NO, k5N, k5O, k5P, k5Q, k5R, KC_NO, k5T, KC_NO} \
}
#include "ansi.h"

// Keycode content
