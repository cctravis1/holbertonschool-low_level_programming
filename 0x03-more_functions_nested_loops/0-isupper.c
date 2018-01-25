#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: - int of _isupper
 * Return: _isupper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
