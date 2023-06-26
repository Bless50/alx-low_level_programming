#include "main.h"

/**
 *swap_int- to swap two numbers
 *@a:numbers to swap.
 * @b:numbers to swap.
 */
void swap_int(int *a, int *b)
{

int tmp = *a;
*a = *b;
*b = tmp;
}
