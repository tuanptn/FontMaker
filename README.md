# FontMaker
Nếu tải về bị chrome báo virus thì cứ ấn "Hiện tất cả tải xuống" rồi chọn "giữ" nhé !

Xem hướng dẫn tại:
http://arduino.vn/bai-viet/7505-hien-thi-tieng-viet-va-moi-ngon-ngu-tren-gioi-voi-thu-vien-makefont#overlay-context=

# Hướng dẫn
#include "FontMaker.h"

void setpx(int16_t x,int16_t y,uint16_t color)

{

   tft.drawPixel(x,y,color); //Thay đổi hàm này thành hàm vẽ pixel mà thư viện led bạn dùng cung cấp cho bạn
   
}
MakeFont myfont(&setpx);

Thay đổi hàm tft.drawPixel thành hàm vẽ 1 điểm ảnh mà thư viện màn hình bạn sử dụng cung cấp cho. Thông thường chúng có tên là drawPixel

# Sử dụng
Có 3 hàm cơ bản:
 set_font

 print
 
 print_noBackColor
Ví dụ:
 
 myfont.set_font(MakeFont_Font1);
 
 myfont.print(0,0,"Xin chào các bạn !",RED,BLACK);
 
 myfont.print(0,0,"Xin chào các bạn !",RED);

