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
	int i;
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i > 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
