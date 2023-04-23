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
	if ( y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
