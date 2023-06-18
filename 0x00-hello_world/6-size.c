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
printf("size of a is %d",sizeof(a));
printf("size of b is %c",sizeof(b));
printf("size of c is %f",sizeof(c));
printf("size of d is %ld",sizeof(d));
printf("size of e is %lld",sizeof(e));
return (0);
}
