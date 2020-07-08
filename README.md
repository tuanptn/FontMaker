# FontMaker
- Tương thích ngược với các thư viện driver, màn hình ...
- Hỗ trợ mọi ngôn ngữ trên thế giới
- Tạo bộ font cá nhân hóa nhanh chóng với tool hỗ trợ
Hướng dẫn sử dụng. Tạo 1 hàm bất kì với tham số là int16_t x, int16_t y, uint16_t color
Ví dụ:
void set_px(int16_t x, int16_t y, uint16_t color)
{

}
Bên trong hàm này các bạn gọi tới hàm vẽ 1 điểm ảnh mà thư viện driver cung cấp
Ví dụ:
void set_px(int16_t x, int16_t y, uint16_t color)
{
  tft.drawPixel(x,y,color);
}

Khởi tạo 1 đối tượng qua class MakeFont và cung cấp địa chủ của hàm đã tạo bên trên
Ví dụ:
MakeFont myfont(&setpx);

Bây giờ, để chọn font chữ gọi hàm setfont
myfont.set_font(UVN_Anh_Hai,UVN_Anh_Hai_MAP);
Trong đó UVN_Anh_Hai và UVN_Anh_Hai_MAP là tên font

Để in font ra màn hình, gọi
myfont.print(0,0,"Xin chào ❤°",ST77XX_GREEN,ST77XX_BLACK);
Trong đó 0,0 là tọa độ x,y. ST77XX_GREEN là màu chữ, ST77XX_BLACK là màu nền

# Tự tạo bộ font mới
Mở Tool hỗ trợ tạo font lên và làm theo hướng dẫn trong video
https://www.youtube.com/watch?v=9KW_ktSJY3k
