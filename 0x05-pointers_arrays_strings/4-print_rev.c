#include "main.h"


void print_rev(char *s)
{
	int i; 
	int x;
	
	i =0;
	while(*s != '\0')
	{
		i++;
		s++;
	}
	x = i;
	while (x >= i) 
	{
		_putchar(*s);
		s--;
		i--;
	}
}
