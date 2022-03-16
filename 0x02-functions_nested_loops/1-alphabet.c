#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabet letters in lowercase
 * Return: 0 On success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
