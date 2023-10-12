#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: is a parameter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 91 && c  < 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
