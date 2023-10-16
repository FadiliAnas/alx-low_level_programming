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

	while(i >= 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	s--;
	s--;
	_putchar(10);


}
