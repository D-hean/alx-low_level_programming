#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: character in string
 */
void print_rev(char *s)
{
int i;
int length = 0;
while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}