#include "main.h"

/**
 * print_numbers - prints numbers from  0-9\n
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c);
	}
	_putchar('\n');
}
