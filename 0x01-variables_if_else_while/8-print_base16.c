#include <stdio.h>
/**
 * main - prints all numbers and letters of base 16
 * Return: Always 0
 */
int main(void)
{
int i;
int a;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (a = 97; a <= 102; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
