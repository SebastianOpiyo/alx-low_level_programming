#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets from a-z ten times
 * Return: On success 0
 * Prints a new line too, and only used _putchar
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char ch;

	while (counter < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		counter++;
	}
}
