#include <stdio.h>
#include "main.h"

/**
 * print_array - prints a number of arrray elements given n num
 * @a: array
 * @n: number of array elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", i);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
