#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>

// Descomentar la línea correspondiente al modelo de pantalla a usar
// En PensActius, el modelo de 1.3 pulgadas es el modelo SH1106, 
// y la de 0.96 pulgadas es el modelo SD1306.
U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI u8g2(U8G2_R0, /* cs=ss*/ 10, /* dc=*/ 9, /* reset=*/ 8);
//U8G2_SH1106_128X64_NONAME_1_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

void setup() {
  u8g2.begin();  

}

void loop() {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB10_tr);
    u8g2.drawStr(0,24,"Hello World!");
  } while ( u8g2.nextPage() );
}
