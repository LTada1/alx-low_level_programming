#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print name
 * @name: pointer toparameters
 * @f: a pointer to a function
 *
 * Return: null.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
