#include "main.h"

/**
 * rev_string - a function that takes a string input and
 * prints it in reverse order.
 *
 * @s: string parameter
 * Return: Void
 */

void rev_string(char *s)
{
	int i, len, temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		continue;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
