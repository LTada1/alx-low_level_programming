#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - allocates memory using malloc
 * @grid: array
 * @height: number of rows
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
