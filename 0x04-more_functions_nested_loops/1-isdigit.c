#include "main.h"

/**
 * __isdigit - checks for uppercase character
 * @c: is a parameter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}

