#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int i = 97;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (i < 103)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
