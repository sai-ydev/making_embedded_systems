#include "mbed.h"

DigitalOut myled(LED1);
InterruptIn button(PC_13);
// Ref: https://os.mbed.com/media/uploads/robt/mbed_course_notes_-_timers_and_interrupts.pdf
Timer debounce;

int flip = 0;

void interrupt_call()
{
    if(debounce.read_ms() > 100) {
        flip = !flip;
        debounce.reset();
    }

}

int main()
{
    debounce.start();
    button.rise(&interrupt_call);

    while(1) {
        if(flip) {
            myled = 1;
            wait(1.0);
            myled = 0;
            wait(1.0);
        }

    }
}
