// there isnt much to explain
// by iker fesser
// last updated (M/D/Y): 4/30/2024
#include <Adafruit_NeoPixel.h>

// make sure to use specifications for you rings/strips/pixels
Adafruit_NeoPixel Pixels(7, 3, NEO_GRB + NEO_KHZ800);

void setup() {
  Pixels.begin();
}

void loop() {
  for (int i = 0; i<Pixels.numPixels(); i++) {
    Pixels.setPixelColor(i, Pixels.ColorHSV((65536/Pixels.numPixels())*i));
  }
  Pixels.show();
}
