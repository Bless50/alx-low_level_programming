#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *int _strlen - printing the length of  string.
 *@s: pointer to check.
 * 
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
