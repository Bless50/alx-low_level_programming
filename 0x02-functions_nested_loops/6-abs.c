#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Compute the absolute value of an integer
 *
 * @x: The number to compute the absolute value for
 *
 * Return: The absolute value of x
 */
int _abs(int x)
{
if (x < 0)
{
return (-x);
}
else
{
return (x);
}
}
