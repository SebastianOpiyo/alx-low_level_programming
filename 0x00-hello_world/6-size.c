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

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long: %zu byte(s)\n", sizeof(longType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
