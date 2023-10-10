#include "main.h"
/* more headers goes there */
/**
 * description: int _islower(int c); - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int _islower(int c)
{
	if ( c > 96  && c < 122 )
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
