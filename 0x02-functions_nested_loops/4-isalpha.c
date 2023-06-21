#include "main.h"
/**
*_islower - Checks if character is an alphabet
* @c:The variable been checked
* Return: 1 (Success)otherwise return 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')||(c >='A' && c <= 'Z')
	return (1);
else
	return (0);
}
