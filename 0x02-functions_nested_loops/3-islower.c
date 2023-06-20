#include "main.h"
/**
*_islower - Checks if character is lowercase
* @c:The variable been checked
* Return: 1 (Success)otherwise return 0
*/
int _islower(int c)
{
if (c <= 'a' && c >= 'z')
	return (1);
else
	return (0);
}
