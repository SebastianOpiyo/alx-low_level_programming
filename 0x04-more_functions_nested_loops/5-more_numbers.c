#include "main.h"

/**
 * more_numbers - prints 0-14 ten times.
 * Return: void
 */

void more_numbers(void)
{
	char i, j, num, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				i = num;
			}
			else
			{
				j = num / 10;
				i = num % 10;
				_putchar('0' + i);
			}
			_putchar('0' + b);
		}
		_putchar('\n);
	}
}
