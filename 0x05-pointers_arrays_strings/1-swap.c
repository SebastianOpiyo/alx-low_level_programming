#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first pointer to the first int
 * @b: second pointer to the second int
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
