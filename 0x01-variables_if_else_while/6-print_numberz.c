#include <stdio.h>

/**
 * main - function that prints numbers 0-9 using putchar.
 * Return: Always 0 (Success)
 * Print a new line too.
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar(10);

	return (0);
}
