#include "main.h"


void print_rev(char *s)
{
	int i;
	int j;
	char *p;
	
	p = s; 
	i =0;
	while(*p != '\0')
	{
		i++;
		p++;
	}
	
	for(j=i-1 ;j >= 0 ;j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
