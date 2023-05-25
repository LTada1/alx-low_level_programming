#include "main.h"
#include <stdio.h>


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number of bit pointer
 * @index: Clear index
 *
 * Return: Success 1,failure -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}