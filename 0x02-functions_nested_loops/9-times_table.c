#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the times table from 0 to 99.
 *
 * Return: Nothing.
 */
void times_table(void)
{
int i, j;
char buf[3];
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
snprintf(buf, 3, "%d, ", i * j);
write(1, buf, strlen(buf));
}
write(1, "\n", 1);
}
}
