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

	len = _strlen(str);

	if (len % 2 != 0)
	{
		for (x = ((len + 1) / 2); x < len; x++)
		{
		_putchar (str[x]);
		}
	}

	for (x = len / 2; x < len; x++)
	{
		_putchar (str[x]);
	}
_putchar ('\n');
}
