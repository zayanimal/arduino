#include <Screen.h>
#include <LCD_1602_RUS.h>

LCD_1602_RUS lcd(0x27,20,4);
Screen screen(lcd);

void setup() {
    screen.getText();
}

void loop() {
}
