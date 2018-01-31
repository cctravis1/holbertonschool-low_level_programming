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
 * rev_string - check
 * @s: first char
 *
 */
void rev_string(char *s)
{
	char hold[500];
	int len, x, y;

	len = _strlen(s);

	for (x = 0; x < len; x++)
	{
		hold[x] = s[x];
	}
	for (x = 0, y = len -1; x < len; x++, y--)
		s[x] = hold[y];
	s[len] = '\0';
}
