#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @x: - first
 *
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	int last;

	if (x > 0)
	{
		last = x % 10;
	return (last);
	}
	else if (x < 0)
	{
		last = x % 10;
		return (last * -1);
	}
	return (0);
}
