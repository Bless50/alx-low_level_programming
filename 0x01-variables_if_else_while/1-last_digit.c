#include <stdlib.h>
#include <time.h>
#include <stdio.h>>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: Prints a string using puts function
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("Last digit of %d and is greater than 5\n", n);
}
if (n == 0)
{
printf("Last digit of %d and is 0\n", n);
}
if (n < 6 && n != 0)
{
printf("Last digit of %d and is less than 6 and not 0\n", n);
}
return (0);
}
