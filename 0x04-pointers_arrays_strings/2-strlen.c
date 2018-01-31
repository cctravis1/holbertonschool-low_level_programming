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
