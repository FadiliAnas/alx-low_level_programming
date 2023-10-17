#include "main.h"


void print_rev(char *s)
{
	int i;
	int j;

	i =0;
	while(*s != '\0')
	{
		i++;
	}
	
	for(j=i ;j >= 0 ;j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
