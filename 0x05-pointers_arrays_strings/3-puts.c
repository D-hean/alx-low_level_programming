#include "main.h"
/**
 *_puts - prints the characters of a string
 *@str: character in the string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
