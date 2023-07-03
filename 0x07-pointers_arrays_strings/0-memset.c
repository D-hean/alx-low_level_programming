#include "main.h"
/**
 * _memset- fills memory with b
 * @s: starting address of memory
 * @b: value
 * @n: size of memory
 * Return: pointer to modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i  = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
