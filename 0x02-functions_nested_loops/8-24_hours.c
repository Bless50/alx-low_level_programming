#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 *
 * Return: Nothing.
 */
void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour <= 23; hour++) {
        for (minute = 0; minute <= 59; minute++) {
            /* Print the current hour and minute, separated by a colon. */
            putchar('0' + hour / 10);
            putchar('0' + hour % 10);
            putchar(':');
            putchar('0' + minute / 10);
            putchar('0' + minute % 10);
            putchar('\n');
        }
    }
}

