#include "main.h"


void print_rev(char *s)
{
	int i; 

	i=0;
	while (*s != '\0')
	{
		s++;
		i++;
	}

	while(i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar(32);


}
