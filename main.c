#include "inc/common.h"

int main(void) {

    initAll();

    while(1) {

        for(uint8_t i = 255; i >= 1; i--) {
            OCR0A = i;
            _delay_ms(20);
        }
        for(uint8_t i = 255; i >= 1; i--) {
            OCR0B = i;
            _delay_ms(20);
        }
    }
}