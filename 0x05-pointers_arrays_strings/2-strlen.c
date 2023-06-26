#include "main.h"
#include <string.h>
/**
 *_strlen- checks the length of a string
 *@s: string variable
 *Return: 1 on success otherwis -1
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
	length++;
}
return length;
}
