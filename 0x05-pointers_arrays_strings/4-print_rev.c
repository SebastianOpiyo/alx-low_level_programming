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
	int j;
	unsigned char a;
	unsigned int len = _strlen((const char *)s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;

		_putchar(s[j]);
	}
	_putchar('\n');
}
