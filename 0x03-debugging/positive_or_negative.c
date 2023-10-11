#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: is a parameter
 * Return: void
 */

int positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (i);
}
