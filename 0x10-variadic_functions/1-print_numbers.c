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
unsigned int i;

if (n == 0 || separator == NULL)
{
return;
}
va_start(var_ar, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(var_ar, int));
if (separator == NULL)
continue;
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
