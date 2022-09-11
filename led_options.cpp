#include "mbed.h"

void flashLED(DigitalOut myled)
{
    myled = 0;
    wait_ns(1000);
    myled = 1;
    wait_ns(1000);
    myled = 0;
    wait_ns(1000);
    myled = 1;
    wait_ns(1000);
    myled = 0;
    wait_ns(1000);
    myled = 1;
    wait_ns(0.5);
}