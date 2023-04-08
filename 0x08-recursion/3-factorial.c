#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate  factorial of a given number
 * @n: Any given number
 *
 * Return: Returns factorial of any given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
		stderr;
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
