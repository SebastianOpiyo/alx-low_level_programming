#include "main.h"

/**
 *
 * puts_half - a function that prints the second half of a string
 * @str: string parameter
 * 
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, mid;

	mid = (len - 1) / 2;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	for (i = mid; i < len; i++)
	{
		_putchar(str[i]);
	}


}
