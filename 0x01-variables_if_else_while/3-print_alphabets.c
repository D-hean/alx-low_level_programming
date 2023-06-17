#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase then upper case
 * Return: Always 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar ('\n');
return (0);
}
