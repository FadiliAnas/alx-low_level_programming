#include "main.h"
/**
 * _isalpha - checks for lowercase
 * @c: is a parameter
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
        if (c > 94  && c < 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
