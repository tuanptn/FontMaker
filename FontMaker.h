/*
  FontMaker.h - Thư viện Font tương thích utf-8
  Created by Dao Nguyen - IOT47.com
  Liên hệ: daonguyen20798@gmail.com
  Người dùng toàn quyền sử dụng cho mục đích cá nhân
*/
#ifndef __FontMaker_h___
#define __FontMaker_h___

#include "IOT47_UTF8.h"
#include "MyFontMaker.h"

typedef void (*set_px_typedef)(int16_t x,int16_t y,uint16_t color);  
class MakeFont
{
    public:     
   	unsigned char read(int16_t x, int16_t y,  uint16_t txt);
   	unsigned char putChar(int16_t x,int16_t y,uint16_t txt,uint16_t color,uint16_t backcolor);
   	void print(int16_t x,int16_t y,unsigned char *s,uint16_t color,uint16_t backcolor);
   	void print(int16_t x,int16_t y,char *s,uint16_t color,uint16_t backcolor);
    void set_font(const MyFont_typedef myfont);
   	MakeFont(set_px_typedef set_px);
   	private:
    set_px_typedef FontMaker_setpx;
    const uint16_t *_f_map;
    const uint8_t  *_f_name;
};

#endif //__FontMaker_h___
