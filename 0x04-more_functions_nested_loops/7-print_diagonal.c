#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int i;

	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}
