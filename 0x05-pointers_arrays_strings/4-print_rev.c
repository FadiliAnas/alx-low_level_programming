#include "main.h"
/**
 *print_rev - check the code
 * @s: parametre
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int j;
	char *p;

	p = s;
	i = 0;
	while (*p != '\0')
	{
		i++;
		p++;
	}

	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
