#include "main.h"

/**
 * puts2 - prints every other char by skipping adjacent char
 * @str: string parameter
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
