// add a "shimmering" effect to your NeoPixel project!
// by iker fesser
// last updated (M/D/Y): 4/30/2024
#include <Adafruit_NeoPixel.h>

// make sure to use specifications for your rings/strips/pixels!
Adafruit_NeoPixel Pixels(7, 3, NEO_GRB + NEO_KHZ800);

int color = 110; // main color to display
int r = 5;  // how much the colors change from the main color

void setup() {
  Pixels.begin();
}

void loop() {
  for (int i = 0; i<Pixels.numPixels(); i++) {
    Pixels.setPixelColor(i, Pixels.ColorHSV((65536/360)*(color+random(-r, r+1))));
  }
  Pixels.show();
  delay(100); // how much to wait between "shimmers"
}
