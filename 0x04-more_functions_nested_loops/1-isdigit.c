#include "main.h"

/**
 * _isdigit - checks if the argument passed is a digit or not
 * @c: argument passed to the function
 *
 * Return: On success(1), otherwise (0)
 */

int _isdigit(c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
