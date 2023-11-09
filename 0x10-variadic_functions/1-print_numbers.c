#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print integers from optional parameters
 * @n: function parameter
 * @separator: string variable
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list var_ar;
unsigned int i, var;

va_start(var_ar, n);
for (i = 0; i < n; i++)
{
var = va_arg(var_ar, unsigned int);
printf("%d", var);

	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
}
printf("\n");

va_end(var_ar);
}
