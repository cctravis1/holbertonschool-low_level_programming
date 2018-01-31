#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 * @str: - first char
 * Return: value of len
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (x % 2 == 0)
		{
			_putchar (str[x]);
		}
	}
	_putchar ('\n');

}
