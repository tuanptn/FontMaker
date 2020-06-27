#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#include "FontMaker.h"

#define TFT_CS        10
#define TFT_RST        9 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC         8

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setpx(int16_t x,int16_t y,uint16_t color)
{
  tft.drawPixel(x,y,color);
}
MakeFont myfont(&setpx);

void setup(void) 
{
  Serial.begin(9600);
  tft.initR(INITR_BLACKTAB); 
  tft.fillScreen(ST77XX_BLACK);
  delay(500);

    myfont.set_font(UVN_Anh_Hai,UVN_Anh_Hai_MAP);
    myfont.print(0,00,"Xin chào ❤°",ST77XX_GREEN,ST77XX_BLACK);

    myfont.set_font(UVN_Banh_Mi,UVN_Banh_Mi_MAP);
    myfont.print(0,20,"Đây là",ST77XX_RED,ST77XX_BLACK);

    myfont.set_font(UVN_Cat_Bien,UVN_Cat_Bien_MAP);
    myfont.print(0,50,"Tiếng Việt",ST77XX_WHITE,ST77XX_BLACK);

    myfont.set_font(UVN_Ba_Le,UVN_Ba_Le_MAP);
    myfont.print(0,80,"Thư viện fontmaker.h",ST77XX_MAGENTA,ST77XX_BLACK);
    myfont.print(0,100,"By Đào Nguyện",ST77XX_BLUE,ST77XX_BLACK);

    myfont.set_font(UVN_Anh_Hai,UVN_Anh_Hai_MAP);
    myfont.print(0,120,"你好朋友",ST77XX_CYAN,ST77XX_BLACK);
}
void loop() 
{

}

