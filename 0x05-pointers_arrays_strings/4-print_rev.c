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
	
	i = _strlen(s);
	
	while (s[i] != 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
