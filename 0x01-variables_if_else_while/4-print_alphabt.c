#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;
	int b = 102;
	int c = 114;

	while (a < 101)
	{
		putchar(a);
		a++;
	}
	while (b < 113)
	{
		putchar(a);
		b++;
	}
	while (c < 123)
	{
		putchar(a);
		c++;
	}
	putchar(10);
	return (0);
}
