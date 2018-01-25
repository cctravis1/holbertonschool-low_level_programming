#include "holberton.h"

/**
 * _isdigit - check for a digit 0 through 9
 * @c: - int of _isdigit
 *
 * Return: _isdigit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
