#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		putchar(44);
		putchar(32);
		a++;
	}
	putchar(10);
	return (0);
}
