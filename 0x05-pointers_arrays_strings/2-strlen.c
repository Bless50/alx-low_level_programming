#include "main.h"

/**
 *int _strlen - printing the length of  string.
 *@s: pointer to check.
 * 
 */
int _strlen(char *s)
{

int len;
len = strlen(*s);
printf("lenght is %d", len);

return (len);
}
