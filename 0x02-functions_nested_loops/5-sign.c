#include "main.h"
/**
 * print_sign - prints sign of value
 * Return: 1 when n is greater than 0
 * 0 when n is equal to 0
 * -1 when n is less than 0
 * @n : number to be checked
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
}
	return (-1);
}
