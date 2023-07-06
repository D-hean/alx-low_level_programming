#include "main.h"
/**
 * factorial- finds the factorial of a number
 * @n: input value
 * Return: factorial of inputed number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
