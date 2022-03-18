#include "main.h"

/**
 * more_numbers - prints 0-14 ten times.
 * Return: void
 */

void more_numbers(void)
{
	char i, a, num, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
