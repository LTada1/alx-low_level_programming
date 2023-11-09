#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints using a pointer to a function as a parameter,
 * it returns a pointer to a function.
 * @f: function pointer
 * @name: string variable
 *
 * Return: Does not return;
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
