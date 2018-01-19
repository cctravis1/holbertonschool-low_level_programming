#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cha;

	for (cha = '0' ; cha <= '9' ; cha++)
	{
		putchar (cha);
	}
	for (cha = 'a' ; cha <= 'f' ; cha++)
	{
		putchar (cha);
	}
	{
		putchar('\n');
	}
	return (0);
}
