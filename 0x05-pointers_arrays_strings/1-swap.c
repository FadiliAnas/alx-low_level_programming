#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: is a parameter
 * @b: is a parmeter
 * REturn: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
