#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
putchar(last_digit + '0');

return (last_digit);
}
