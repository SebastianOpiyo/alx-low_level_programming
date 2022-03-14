#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print alphabet(lower) letters using putchar only.
 * Return: Always 0 (Success)
 * Print a new line too and skip letter q & e .
 */

int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar(x);
	}

	putchar('\n');

	return (0);
}
