#include "main.h"
/**
 * _strcat - concatenates two string
 *@dest: first string
 *@src: second string
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
int L_d = 0;
int L_s = 0;

while (dest[L_d] != '\0')
{
L_d++;
}

while (src[L_s] != '\0')
{
L_s++;
L_d++;
}

dest[L_d] = '\0';
return (dest);
}
