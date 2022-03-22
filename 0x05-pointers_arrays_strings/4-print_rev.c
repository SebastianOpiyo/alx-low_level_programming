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
	int i, len;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	for (len = i; len > 0; len--)
	{
		_putchar(s[len]);

	}
	_putchar('\n');
}
