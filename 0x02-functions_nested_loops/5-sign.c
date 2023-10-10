#include "main.h"
/* more headers goes there */
/**
 * int _islower(int c); - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int print_sign(int n)
{
	if(n > 0)
	{
		return(1);
	}
	else if(n == 0)
	{
		return(0);
	}
	else if(n < 0)
	{
		return(-1);
	}

}
