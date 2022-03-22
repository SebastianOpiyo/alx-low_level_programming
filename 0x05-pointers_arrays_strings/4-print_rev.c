#include "main.h"

/**
 * print_rev - a function that takes a string input and
 * prints it in reverse order.
 *
 * @s: string parameter
 * Return: Void
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	j = i - 1;
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
