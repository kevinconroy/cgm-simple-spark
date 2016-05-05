#include "pebble_utils.h"

/**
 * A null safe method to call text_layer_set_text_color via pebble.h
 */
void safe_text_layer_set_text(TextLayer *text_layer, const char *text) {
    if (text_layer && text) {
        text_layer_set_text(text_layer, text);
    }
}

/**
 * A null safe method to call text_layer_set_text_color via pebble.h
 */
void safe_text_layer_set_text_color(TextLayer *text_layer, GColor color) {
    if (text_layer) {
        text_layer_set_text_color(text_layer, color);
    }
}

/**
 * A null safe method to call bitmap_layer_set_compositing_mode via pebble.h
 */
void safe_bitmap_layer_set_compositing_mode(BitmapLayer *bitmap_layer, GCompOp mode) {
    if (bitmap_layer) {
        bitmap_layer_set_compositing_mode(bitmap_layer, mode);
    }
}
