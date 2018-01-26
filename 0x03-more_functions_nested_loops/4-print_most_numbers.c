#include "holberton.h"
/**
 * print_most_numbers - prints numbbers, from 0 - 9
 *
 *
 *
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		if (x == 2)
		{
			x++;
		}
		if (x == 4)
		{
			x++;
		}
		_putchar (x + '0');
	}
	_putchar ('\n');
}
