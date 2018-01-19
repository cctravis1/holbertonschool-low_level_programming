#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int c = 0;
	int t = 0;

	for (i = 0 ; i <= 99 ; i++)
	{
		if(c == 10)
		{
			t++;
			c = 0;
		}

		putchar(t + '0');
		putchar(c + '0');
		if (i != 99)
		putchar(',');
		putchar(' ');
		c++;
	}
	{ putchar('\n');
	}
	return (0);
}
