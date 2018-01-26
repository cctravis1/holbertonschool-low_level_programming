#include "holberton.h"
/**
 * print_square - function
 * @size: - first var
 *
 *
 */
void print_square(int size)
{
	int r;
	int c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 0; c <= size - 1; c++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
