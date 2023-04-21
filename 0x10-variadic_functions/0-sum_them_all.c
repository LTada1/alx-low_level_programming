#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list vars;

	sum = 0;

	va_start(vars, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vars, int);
	}
	return (sum);

	va_end(vars);
}

