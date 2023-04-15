#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: array element
 * @size: the size of the memory to print
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *AR;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	AR = malloc(nmemb * size);
	if (AR == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)(AR) + i) = 0;
	}
	return (AR);
}
