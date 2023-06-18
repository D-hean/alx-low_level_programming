#include <stdio.h>
/**
 * main - Print all possible combinations of non-repeating two double digits
 * Return: Always 0
 */
int main(void)
{
int i;
int j;
for (i = 00; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar(i + '0');
putchar (' ');
putchar(j + '0');

if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
