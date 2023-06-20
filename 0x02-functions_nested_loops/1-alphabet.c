#include "main.h"
/**
 * main - Entry
 * print_alphabet - Program that prints the alphabets in lowercas
 * Return: 0 Always
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
_putchar('\n');
}
}

int main(void)
{
print_alphabet();
return (0);
}
