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
    void writeStripRBGEasyNeoPixel(int r, int g, int b);
private:
    Adafruit_NeoPixel m_easyNeoPixels;
};