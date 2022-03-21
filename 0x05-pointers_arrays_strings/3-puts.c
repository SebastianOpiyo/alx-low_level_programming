#include "main.h"

/**
 * _puts - a function that takes input string and prints it
 * @str: input string parameter
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
