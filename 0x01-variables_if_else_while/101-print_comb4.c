#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				m = i * 100 + j * 10 + k;
				if ((m > 12) && (m < 790))
				{
					putchar(44);
					putchar(32);
				}
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
			}
		}
	}
	putchar(10);
	return (0);
}
