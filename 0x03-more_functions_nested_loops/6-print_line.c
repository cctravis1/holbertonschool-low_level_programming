#include "holberton.h"
/**
 * print_line - prints 10 times the numbers 0 through 14
 * @n: - first var
 *
 *
 */
void print_line(int n)
{
	int y;

	for (y = 1; y <= n ; y++)
	{
		_putchar ('_');
		if (y == n)
		{
			_putchar ('\n');
		}
	}
	if (n < 1)
	{
	_putchar ('\n');
	}

}
