#include "main.h"
/**
 *swap_int- swaps the values of its parameters
 *@a: first parameter of swap_int
 *@b: second value of swap_int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
