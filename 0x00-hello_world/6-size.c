#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints a string using puts function
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}