#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print alphabet letters using putchar,
 * Return: Always 0 (Success)
 * Print a new line too.
*/
int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
