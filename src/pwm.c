#include "../inc/pwm.h"

void pwmInit(void) {

    DDRD |= (1 << 5) | (1 << 6);
    TCCR0A = (1 << COM0A1) | (1 << COM0B1) | (1 << WGM00);
    TCCR0B = (1 << CS00);
}