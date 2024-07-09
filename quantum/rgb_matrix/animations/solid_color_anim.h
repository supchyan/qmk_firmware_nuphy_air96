RGB_MATRIX_EFFECT(SOLID_COLOR)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

void drawAmogus(void) {
    rgb_matrix_set_color(33, 255, 0, 0);
    rgb_matrix_set_color(34, 255, 0, 0);
    rgb_matrix_set_color(35, 255, 0, 0);
    rgb_matrix_set_color(51, 255, 255, 255);
    rgb_matrix_set_color(52, 255, 255, 255);
    rgb_matrix_set_color(53, 255, 0, 0);
    rgb_matrix_set_color(54, 255, 0, 0);
    rgb_matrix_set_color(68, 255, 0, 0);
    rgb_matrix_set_color(69, 255, 0, 0);
    rgb_matrix_set_color(70, 255, 0, 0);
    rgb_matrix_set_color(84, 255, 0, 0);
    rgb_matrix_set_color(86, 255, 0, 0);
}

bool SOLID_COLOR(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    // RGB rgb = rgb_matrix_hsv_to_rgb(rgb_matrix_config.hsv);
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0, 0, 0);
    }

    drawAmogus();

    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
