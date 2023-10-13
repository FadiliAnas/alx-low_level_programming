#include "main.h"
/**
 *print_line - prints a straight line
 *@n:parameter
 *Return:returns nothing
 */
void print_line( int n)
{
	int i;

	if ( n < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0 ; i > n + 1 ; n++ )
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
