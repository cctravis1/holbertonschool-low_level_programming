#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *
 * @a: - first
 * @b: - second
 */
void swap_int(int *a, int *b)
{
	int tempx = *a;

	*a = *b;
	*b = tempx;
}
