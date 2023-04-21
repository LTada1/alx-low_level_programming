#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print numbers
 * @n: number of parameters
 * @separator: string argument
 *
 * Return: null.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list vars;

	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(vars, int);
		printf("%d", j);
		if (i != (n - 1) || separator == NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vars);
}
