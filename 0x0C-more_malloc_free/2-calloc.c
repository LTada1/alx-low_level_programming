#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @size: number of bytes
 * @nmemb: number of elements
 *
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr = malloc(sizeof(size) * nmemb);
}
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
