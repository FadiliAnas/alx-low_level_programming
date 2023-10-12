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
	while (i < 58 && i != 50 && i != 53)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}

