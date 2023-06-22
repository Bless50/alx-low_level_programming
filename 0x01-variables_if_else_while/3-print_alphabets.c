#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the letters of the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');

return (0);
}
