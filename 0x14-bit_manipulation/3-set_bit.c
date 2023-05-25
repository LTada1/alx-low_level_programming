#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number of bit pointer.
 * @index: what to be set to certain value.
 *
 * Return: succes 1, failure -1.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
