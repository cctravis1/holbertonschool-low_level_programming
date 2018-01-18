#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long int longlngintType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of a int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(longlngintType));
	printf("Size of a float: %ld byte(s)\n",sizeof(floatType));

	return (0);
}
