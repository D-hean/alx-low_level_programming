#include <stdio.h>
/**
 * main - A program the prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar ('\n');
return (0);
}
