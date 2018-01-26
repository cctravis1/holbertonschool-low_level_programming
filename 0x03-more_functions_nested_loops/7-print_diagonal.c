#include "holberton.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: - first var
 *
 *
 */
void print_diagonal(int n)
{
	int s;
	int y;

	if (n > 0)
	{
		_putchar ('\\');
		_putchar ('\n');
		for (y = 2; y <= n; y++)
		{
			for (s = 1; s <= y - 1; s++)
			{
				_putchar (' ');
			}
		_putchar ('\\');
		if (n != y)
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
