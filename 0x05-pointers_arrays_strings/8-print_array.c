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
		if (i > (n - 1))
		{
			break;
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
