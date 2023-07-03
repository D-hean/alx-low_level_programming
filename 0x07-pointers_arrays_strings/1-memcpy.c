#include "main.h"
/**
 *_memcpy - copies memory from one location to another
 * @n: number of bytes to transfer
 * @dest: destination
 * @src: source
 * Return: value of destchar *_memcpy(char *dest, char *src, unsigned int n);
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
