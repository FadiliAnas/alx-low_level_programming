#include "main.h"
/**
 *print_numbers - check the code
 *
 *Return: Always 0.
 */

void print_numbers(void)
{
        int i;

        i = 48;
        while (i < 58 && i != 50 && i != 53) 
        {
                _putchar(i);
                i++;
        }
        _putchar(10);
}

