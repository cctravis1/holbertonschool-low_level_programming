#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	int y = 0;

	while (y <= 9)
	{
		int x = 'a';

		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
		_putchar('\n');
		y++;
	}
}
