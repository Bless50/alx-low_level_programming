#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Return the length of a string.
 *
 * @param s The string to get the length of.
 *	* A pointer to the string.
 * @return the length of the string.
 *	 * The length of the string, in characters.
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
