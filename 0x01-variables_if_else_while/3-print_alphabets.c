#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print alphabet(lower & Upper) letters using putchar only.
 * Return: Always 0 (Success)
 * Print a new line too and use putchar thrice only.
 */

int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
