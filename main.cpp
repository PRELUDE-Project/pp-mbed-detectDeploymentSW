#include "mbed.h"
DigitalIn _pin_plus(p10);
DigitalIn _pin_minus(p11);
RawSerial pc(USBTX, USBRX, 9600);

int plus_input, minus_input;

int main() {
    _pin_plus.mode(PullUp);
    _pin_minus.mode(PullUp);
    while(1) {
        plus_input  = _pin_plus;
        minus_input = _pin_minus;
        pc.printf("plus_input: %d, minus_input: %d\r\n", plus_input, minus_input);
        wait(1.0);
    }
}
