#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing numbers from 0 to 9 using while loop and putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
i = 0;

while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');

return (0);
}
