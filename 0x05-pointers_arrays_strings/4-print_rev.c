#include "main.h"


void print_rev(char *s)
{
	int i; 
	int x;
	
	i =0;
	while( s[i] < 0)
	{
		i++;
	}
	x = i;
	while (x < i) 
	{
		_putchar(s[i]);
		i--;
	}
}
