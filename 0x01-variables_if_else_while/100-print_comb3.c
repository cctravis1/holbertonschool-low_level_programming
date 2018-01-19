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

	for (i = '0' ; i < '9' ; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			putchar(i);
			putchar(c);
			if (i < '8' || c < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	{ putchar('\n');
	}
	return (0);
}
