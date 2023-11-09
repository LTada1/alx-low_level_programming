#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameters
 * @n: function parameter
 *
 * Return: returns the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list var_ar;

if (n == 0)
{
return (0);
}
va_start(var_ar, n);

for (i = 0; i < n; i++)
{
sum += va_arg(var_ar, unsigned int);
}
va_end(var_ar);
return (sum);
}
