#pragma once
#include <Adafruit_NeoPixel.h>

class NeoPixelController
{
public:
    NeoPixelController (int PINLED, int NUMPIXELS);
    void setupEasyNeoPixels();
    void writeEasyNeoPixel(int num, int val);
    void writeEasyNeoPixel(int num, int r, int g, int b);
    void offEasyNeoPixel();
    void onEasyNeoPixel();
    void setBrightnessEasyNeoPixel(int brightness);
private:
    Adafruit_NeoPixel m_easyNeoPixels;
};