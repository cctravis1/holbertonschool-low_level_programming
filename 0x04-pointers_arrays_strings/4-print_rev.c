#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 *
 * @s: - first char
 * Return: value of len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
		len++;

	return (len);

}

/**
 * print_rev - check the code for Holberton School students.
 *
 * @s: - first char
 *
 */
void print_rev(char *s)
{
/* to find length */
	int len = _strlen(s);
	int x = 0;

/* to reverse */

	for (x = len - 1; x >= 0; x--)
	{
		_putchar (s[x]);
	}
	_putchar ('\n');
}
