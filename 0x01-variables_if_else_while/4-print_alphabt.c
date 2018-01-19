#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
		if (ch == 'e')
{
			ch = ch + 1;
			continue;
		}
		if (ch == 'q')
{
			ch = ch + 1;
			continue;
		}

	putchar(ch);
	}

	{
		putchar('\n');
	}
	return (0);
}
