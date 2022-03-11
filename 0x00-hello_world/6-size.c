#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Assignment: print size of datastructures of the computer.
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long int longLongIntType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
