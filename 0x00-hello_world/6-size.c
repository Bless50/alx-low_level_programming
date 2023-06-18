#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints a string using puts function
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long e;
printf("The size of a is %zu bytes\n", sizeof(a));
printf("The size of b is %zu bytes\n", sizeof(b));
printf("The size of c is %zu bytes\n", sizeof(c));
printf("The size of d is %zu bytes\n", sizeof(d));
printf("The size of e is %zu bytes\n", sizeof(e));
return (0);
}
