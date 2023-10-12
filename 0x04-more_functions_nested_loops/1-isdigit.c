#include "main.h"

/**
 * __isdigit - checks for uppercase character
 * @c: is a parameter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 58 && c  > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
