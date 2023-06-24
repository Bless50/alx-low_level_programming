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

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar(i * j + 48);
if (j < 9)
{
putchar(',');
}
}
putchar('\n');
}
}
