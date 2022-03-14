#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to check if a number is negative, zero or positive
 * Return: return 0 (Success)
 * Prints is negative, positive or zero depending on the value of n
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
