#include <Arduino.h>
#include <neopixel.h>

NeoPixelController::NeoPixelController(int pin, int NUMPIXELS) 
{
  m_easyNeoPixels = Adafruit_NeoPixel(NUMPIXELS, pin, NEO_GRB + NEO_KHZ800);
}

void NeoPixelController::setupEasyNeoPixels()
{
  m_easyNeoPixels.begin();
  m_easyNeoPixels.show();
}

void NeoPixelController::setBrightnessEasyNeoPixel(int brightness)
{
  m_easyNeoPixels.setBrightness(brightness);
  m_easyNeoPixels.show();
}

void NeoPixelController::writeEasyNeoPixel(int num, int val) 
{
  if (m_easyNeoPixels.canShow())
  { 
    m_easyNeoPixels.setPixelColor(num, m_easyNeoPixels.Color(val * 255, val * 255, val * 255));
    m_easyNeoPixels.show();
  }
}

void NeoPixelController::writeEasyNeoPixel(int num, int r, int g, int b)
{
  if (m_easyNeoPixels.canShow())
  {
    m_easyNeoPixels.setPixelColor(num, m_easyNeoPixels.Color(r, g, b));
    m_easyNeoPixels.show();
  }
}

void NeoPixelController::offEasyNeoPixel() 
{
  if(m_easyNeoPixels.canShow()) 
  {
    for (int i = 0; i < m_easyNeoPixels.numPixels(); i++) 
    {
      m_easyNeoPixels.setPixelColor(i, m_easyNeoPixels.Color(0, 0, 0));
    }
    m_easyNeoPixels.show();
  }
}

void NeoPixelController::onEasyNeoPixel() 
{
  if(m_easyNeoPixels.canShow())
  {
    for (int i = 0; i < m_easyNeoPixels.numPixels(); i++) 
    {
      m_easyNeoPixels.setPixelColor(i, m_easyNeoPixels.Color(255, 255, 255));
    }
    m_easyNeoPixels.show();
  }
}