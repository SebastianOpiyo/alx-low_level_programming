#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: Pointer to the string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);

}
