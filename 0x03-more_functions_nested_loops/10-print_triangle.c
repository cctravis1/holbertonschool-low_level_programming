#include "holberton.h"
/**
 * print_triangle - function
 * @size: - first var
 *
 *
 */

void print_triangle(int size)
{
	int s;
	int r;
	int p;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= size - r; s++)
			{
				_putchar (' ');
			}
			for (p = 1; p <= r; p++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
