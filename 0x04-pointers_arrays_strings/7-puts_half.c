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
 * puts_half - check
 * @str: first char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int x;
	int y;

	len = _strlen(str);
	x = 0;

	if (len % 2 != 0)
	{
		x = (len + 1) / 2;
	}
	else
	{
		x = len / 2;
	}
	for (y = x; y < len; y++)
	{
		_putchar (str[y]);
	}
_putchar ('\n');
}
