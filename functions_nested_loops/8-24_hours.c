#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int h, m;

    for (h = 0; h < 24; h++)        /* hours loop */
    {
        for (m = 0; m < 60; m++)    /* minutes loop */
        {
            _putchar('0' + h / 10); /* tens of hours */
            _putchar('0' + h % 10); /* units of hours */
            _putchar(':');
            _putchar('0' + m / 10); /* tens of minutes */
            _putchar('0' + m % 10); /* units of minutes */
            _putchar('\n');
        }
    }
}
