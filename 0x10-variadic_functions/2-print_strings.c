#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Print strings
 * @n: number of arguments
 * @separator: string arguments
 *
 * Return: sum.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vars;

	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vars, char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (i != (n - 1) || separator == NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vars);
}
