#include "main.h"

/**
 * print_line - prints '_' n times
 * @n: parameter for number of times
 *
 * Return: Always void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
