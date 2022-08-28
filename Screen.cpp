#include "Screen.h"

Screen::Screen(LCD_1602_RUS lc) : lcd(lc) {};

void Screen::init() {
    lcd.init();
    lcd.backlight();
}

void Screen::printGreeting() {
    lcd.setCursor(0, 0);
    lcd.print("Значение ручки:");
    delay(1000);
}

void Screen::printPotValue() {
    lcd.setCursor(16, 0);
    lcd.print(getPotValue());

    delay(50);
}

int Screen::getPotValue() {
    return map(analogRead(A0), 0, 1000, 0, 10);
}
