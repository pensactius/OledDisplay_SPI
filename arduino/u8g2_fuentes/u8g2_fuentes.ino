#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>

U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI oled(U8G2_R0, 10, 9, 8);

void setup() {
  oled.begin();

}

void loop() {
  oled.firstPage();
  do {
    oled.setFont (u8g2_font_courB10_tr);
    oled.drawStr (4,14, "PensActius");
    oled.setFont (u8g2_font_oldwizard_tu);
    oled.drawStr (3,14+15, "HARRY POTTER");
    oled.setFont (u8g2_font_iconquadpix_m_all);
    oled.drawStr (3,14+15+12+4, "B");
    oled.setFont (u8g2_font_courB10_tr);
    oled.drawStr (3+16, 14+15+12+4, "Guardar");
  } while (oled.nextPage());

}
