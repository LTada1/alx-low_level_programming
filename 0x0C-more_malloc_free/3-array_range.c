#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - creates array
 * @max: max Num of values
 * @min:min num of values
 *
 * Return: returns a pointer.
 */

int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(int) * (max - min) + 1);
for (i = 0; i < max - min; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
