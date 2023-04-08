#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Return value of number raised to power
 * @x: Number whose value is to be calculated
 * @y: Power of another number
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	int z = 0;

	if ( y < 0)
		return (-1);
	z += x**y;
	return (z);
}
