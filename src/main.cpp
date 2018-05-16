#include "mbed.h"
#include "usain_control.h"

int count;

int main()
{
    UsainControl control;

    control.set_mode(UsainControl::MODE_RC);

    while (true)
    {
        printf("running... %d\n", count++);
        wait(1.0);
    }
}
