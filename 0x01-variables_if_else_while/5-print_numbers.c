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

for (i = 0; i <= 9; i++)
{
printf(" %d%c", i, '\0');
}

return (0);
}

