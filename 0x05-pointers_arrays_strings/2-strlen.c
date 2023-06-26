#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - Return the length of a string.
 *@para s: The string to get the length of.
 *@return: The length of the string.
 */
int _strlen(char *s)
{

int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
