#include "main.h"

/**
 * flip_bits - gives number of bits you need to flip
 * @n: number
 * @m: number
 *
 * Return: bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, bit_count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
bit_count++;
}

return (bit_count);
}
