#include "Arduino.h"
#include <LCD_1602_RUS.h>

class Screen {
    LCD_1602_RUS lcd;

    public:
        Screen(LCD_1602_RUS lcd);

        void init();
        void printGreeting();
        void printPotValue();

    private:
        int getPotValue();
};
