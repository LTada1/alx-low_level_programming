#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps value of two vvariables
 * @a: Variable
 * @b: Variable
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
