#include "main.h"

/**
 * print_triangle - prints a right-angled triangle
 * @size: size parameter of the triangle
 */
void print_triangle(int size)
{
    int row, column;

    if (size > 0)
    {
        for (row = 1; row <= size; row++)
        {
            for (column = size - row; column > 0; column--)
            {
                _putchar(' ');
            }

            for (column = 0; column < row; column++)
            {
                _putchar('#');
            }

            if (row == size)
                continue;

            _putchar('\n');
        }
    }

    _putchar('\n');
}

