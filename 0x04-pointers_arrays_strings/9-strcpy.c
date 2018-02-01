#include "holberton.h"

/**
 * _strcpy - check the code for Holberton School students.
 *
 * @dest: - first
 * @src: - second
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int tempx;

	for (tempx = 0; src[tempx] != '\0'; tempx++)

		dest[tempx] = src[tempx];

	return (dest);
}
