#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - 
 * @n: number of parameters
 * @seperator: 
 *
 * Return: null.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list vars;
	va_start(vars, n);

	if (separator == NULL)
		return ;
	for (i = 0; i < n; i++)
	{
		j = va_arg(vars, int);
		printf("%d", j);
		if (i != (n - 1) || separator == NULL)
			printf("%s", separator);
	}
	printf("\n");

}
