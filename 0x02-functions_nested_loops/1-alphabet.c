#include "main.h"
/* more headers goes there */
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
