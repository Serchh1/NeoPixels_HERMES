#include <Arduino.h>
#include <neopixel.h>
#define PINLED 6
#define NUMPIXELS 8

NeoPixelController strip(PINLED, NUMPIXELS);

void setup() 
{
    // Set NeoPixel strip
    strip.setupEasyNeoPixels();
    strip.setBrightnessEasyNeoPixel(127);
}

void loop() 
{
    // Turn the first NeoPixel RED
    strip.writeEasyNeoPixel(0, 255, 0, 0);
    delay(500);

    // Turn the second NeoPixel GREEN
    strip.writeEasyNeoPixel(1, 0, 255, 0);
    delay(500);

    // Turn the first NeoPixel BLUE
    strip.writeEasyNeoPixel(2, 0, 0, 255);
    delay(500);

    // Turn Purple all NeoPixels
    strip.writeStripRBGEasyNeoPixel(255,0,255);
    delay(1000);

    // Turn off all NeoPixels
    strip.offEasyNeoPixel();
    delay(1000); 
    
    // Turn on all NeoPixels
    strip.onEasyNeoPixel();
    delay(1000);

    // Turn off all NeoPixels
    strip.offEasyNeoPixel();
    delay(1000);
}