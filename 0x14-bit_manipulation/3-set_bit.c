#include "main.h"

/**
 * set_bit - Set bit value 1 at any position.
 * @n: bit number
 * @index: bit position
 *
 * Return: On success 1 or failure -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int value_set;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
value_set = 1 << index;
*n = *n | value_set;
return (1);
}
