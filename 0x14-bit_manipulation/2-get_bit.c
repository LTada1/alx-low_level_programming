#include "main.h"
#include <stdio.h>


/**
 * get_bit - returns the value of a bit at a given index
 * @n: search number
 * @index: number of bit
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int ValueBit;

	if (index > 63)
		return (-1);
	ValueBit = (n >> index) & 1;
	return (ValueBit);
}
