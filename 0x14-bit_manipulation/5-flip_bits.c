#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns umber of bits you would need to flip.
 * @n: Number first.
 * @m: Number second.
 *
 * Return: fipped number of bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, CnT = 0;
	unsigned long int CuRR;
	unsigned long int ExCL = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		CuRR = ExCL >> j;
		if (CuRR & 1)
			CnT++;
	}
	return (CnT);
}
