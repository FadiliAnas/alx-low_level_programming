#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: is a parameter
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96  && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
