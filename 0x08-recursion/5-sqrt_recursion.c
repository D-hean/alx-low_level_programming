#include "main.h"
int real_sqrt(int n, int i);

/**
 * _sqrt_recursion- finds the square root of a number
 * @n: input value
 * Return: square root number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	 return (real_sqrt(n, 0));
}
	/**
	 * real_sqrt- finds the sqrt of a given number
	 * @n: input value
	 * @i: square root
	 * Return: reulting square root number
	 */
	int real_sqrt(int n, int i)
	{
		if (i * i >  n)
		{
			return (-1);
		}
		if (i * i == n)
		{
			return (i);

	}
		return (real_sqrt(n, i + 1));
	}
