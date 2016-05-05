#pragma once

#include <pebble.h>

//! A null safe method to call text_layer_set_text via pebble.h
//! @param text_layer The text_layer to change colors on, may be null.
//! @param text The text to set the text_layer to if it is not null.
void safe_text_layer_set_text(TextLayer *text_layer, const char *text);

//! A null safe method to call text_layer_set_text_color via pebble.h
//! @param text_layer The text_layer to change colors on, may be null.
//! @param color The color to change the text_layer to if it is not null.
void safe_text_layer_set_text_color(TextLayer *text_layer, GColor color);


//! A null safe method to call bitmap_layer_set_compositing_mode via pebble.h
//! @param bitmap_layer The bitmap_layer to change, may be null.
//! @param mode The mode to change the bitmap_layer to if it is not null.
void safe_bitmap_layer_set_compositing_mode(BitmapLayer *bitmap_layer, GCompOp mode);
