#include "main.h"
#include <stdio.h>
/**
 * _isupper -checks if character is uppercase
 * @c: Character to be checked
 * Return: 1(success) otherwise return 0.
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
