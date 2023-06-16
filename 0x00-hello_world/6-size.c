#include <stdio.h>
/**
 * main - a program for printing the sizes of various data types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long init d;
float f;
printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int:%lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int:%lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float:%lu bytes(s)\n", (unsigned long)sizeof(f));
}
