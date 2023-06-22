#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the letters of the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char n;

for (i = 1; i <= 9; i++)
putchar(i + '0');
for (n = 'a'; i <= 'f'; i++)
putchar(n);
putchar('\n');

return (0);
}
