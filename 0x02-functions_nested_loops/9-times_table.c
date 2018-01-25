#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 */
void times_table(void)
{
	int r;
	int x;
	int s;

	for (r = 0; r <= 9; r++)
	{
		for (x = 0; x <= 9; x++)
		{
			s = r * x;
			if (x == 0)
			{
				_putchar('0');
			}
			else if (s <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(s / 10 + '0');
				_putchar(s % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
