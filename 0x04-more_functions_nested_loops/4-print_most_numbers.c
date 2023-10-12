#include "main.h"
/**
 *print_most_numbers -  prints the numbers.
 *
 *Return : Always 0.
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar(10);
}

