#include <Adafruit_CircuitPlayground.h>

int red = 0;
int green = 0;
int blue = 0;
const int DELAY = 10;

void setup()
{
  CircuitPlayground.begin(); 
  //Serial.begin(9600);
}
 
void loop()
{
  red = 0;
  green = 0;
  blue = 0;
  for (int color = 0; color < 256; color++)
  {
    blue++;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  } 
  
  blue = 255;
  
  for (int color = 0; color < 256; color++)
  {
    green++;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  }
  
  green = 255;
  
  for (int color = 0; color < 256; color++)
  {
    red++;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  }
  
  red = 255;
  
  for (int color = 255; color > 0; color--)
  {
    green--;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  }
    for (int color = 255; color > 0; color--)
  {
    blue--;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  }
    for (int color = 255; color > 0; color--)
  {
    red--;
    CircuitPlayground.setPixelColor(0, red, green, blue);
    delay(DELAY);
  }
}
