#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  creates an array of integers
 * @max: values
 * @min: values
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *AR;
	int i, range;

	range = 0;
	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	AR = malloc(range * sizeof(int));
	if (AR == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		AR[i] = min + 1;
	}
	return (AR);
}

