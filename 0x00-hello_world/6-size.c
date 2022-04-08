#include <stdio.h>
/**
 *main - Entry point
 *
 * Evaluating sizes of variables
 * Return: 0 after runnig the program
 */
int main(void)
{
	char charType;
	int intType;
	long int longinType;
	long long int longlonginType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n",  sizeof(longinType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlonginType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}

