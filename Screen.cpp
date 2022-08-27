#include "Screen.h"

Screen::Screen(LCD_1602_RUS lc) : lcd(lc) {};

String Screen::getText() {
    String str;
    str = "по-русски";

    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Теперь можнооооо");
    lcd.setCursor(0, 3);
    lcd.print(str);

    return "Теперь можно";
}
