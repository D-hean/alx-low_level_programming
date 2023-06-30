#include <unistd.h>
#include "main.h"
/**
 *_putchar- prints the value of c to standard out
 * @c: the character been printed
 * Return: 1 on sucess otherwise return -1
 */
int _putchar (char c)
{
	return(write(1, &c, 1));
}
