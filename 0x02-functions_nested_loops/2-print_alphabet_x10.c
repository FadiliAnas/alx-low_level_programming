#include "main.h"
/* more headers goes there */
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
	int u;
	int i = 97 ;

	for (u = 0; u < 10; u++)
	{
		while (i < 123)
        {
                _putchar(i);
                i++;
        }
		i=97;
	_putchar(10);
	}		
}
