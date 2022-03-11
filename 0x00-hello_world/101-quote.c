#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Assignment: print to the standard error.
 */
int main(void)
{
	fwrite("and that piece of art is useful\"-\
			Dora Korpar, 2015-10-19\n", 39, 1, stderr);

	return (0);
}
