#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @x: - first
 *
 * Return: Always 0.
 */

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x * -1);
	}
	return (0);
}
