#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int c;
	int k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (c = i + 1; c <= '8'; c++)
		{
			for (k = c + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(c);
				putchar(k);
				if (i < '7' || c < '8' || k < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	{ putchar('\n');
	}
	return (0);
}
