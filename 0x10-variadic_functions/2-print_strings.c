#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Print strings from optional parameters
 * @n: function parameter
 * @separator: string variable
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list var_ar;
unsigned int i;
char *str;

va_start(var_ar, n);
for (i = 0; i < n; i++)
{
str = va_arg(var_ar, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(var_ar);
printf("\n");
}
