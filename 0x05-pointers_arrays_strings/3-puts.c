#include "main.h"
#include <stdio.h>
/**
 * _puts - Description:return the value of a string
 *@str: the variable.
 * 
 */

void _puts(char *str)
{
char i = 0;
while (str[i] != '\0')
{
printf(" %c", str[i]);
i++;
}

