#include "main.h"
/**
 * _strncat - concatenates two string
 *@dest: first string
 *@src: second string
 *@n: length of src
 *Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int L_d = 0;
int L_s = 0;

while (dest[L_d] != '\0')
{
L_d++;
}

while (L_s < n && src[L_s] != '\0')
{
L_s++;
L_d++;
}

dest[L_d] = '\0';
return (dest);
}
