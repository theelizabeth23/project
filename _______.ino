#include "U8g2lib.h"
#include "Wire.h"
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
void setup(void) {
u8g2.begin();
}
void loop(void) {
u8g2.firstPage();
do {
u8g2.setFont(u8g2_font_ncenB10_tr);
u8g2.drawLine(1, 28, 127, 28);
u8g2.drawRFrame(1,1,127,63,1);
u8g2.drawStr(15,22,"Test OLED");
u8g2.drawStr(12,43,"OLED 1.3 inch");
u8g2.drawStr(20,60,"Natthawut");
} while ( u8g2.nextPage() );
}
