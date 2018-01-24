#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @x: - first
 *
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (last > 0)
	{
		_putchar (last + '0');
		return (last);
	}
	else
	{
		_putchar (last * -1 + '0');
		return (last * -1);
	}
}
