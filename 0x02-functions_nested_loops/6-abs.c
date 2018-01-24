#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @x: - first
 *
 * Return: Always 0.
 */

int _abs(int x)
{
	int y;

	y = (x >> 31);

	return ((x ^ y) - y);
}
