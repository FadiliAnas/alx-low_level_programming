#include "main.h"


void print_rev(char *s)
{
	int i; 

	i=0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	while(i >= 0)
	{
		if(i != 0)
		{
		_putchar(*s);
		i--;
		s--;
		}

	}
	_putchar(10);
	_putchar(10);


}
