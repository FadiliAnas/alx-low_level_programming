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
	int a;

	if(n > 0)
	{
		a = 1;
	}
	else if(n == 0)
	{
		a = 0;
	}
	else if(n < 0)
	{
		a = -1;
	}
	return (a);

}
