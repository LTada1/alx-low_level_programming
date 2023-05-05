#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - converts binary to decimal.
 * @b: strings of binary numbers
 *
 * Return: Decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int Dec_value = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		Dec_value = (Dec_value << 1) + (*b - '0');
	}
	return (Dec_value);
}
