#include "main.h"

void _puts(char *str)
{
	int i;

        while (*str != '\0')
        {
                i++;
                str++;

        }
	_putchar(32);
}
