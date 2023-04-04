#include "main.h"
#include <stdio.h>

/**
 *  _memcpy - prints buffer in hexa
 * @dest: the address of memory to print to.
 * @src: the address of memory to be copied from.
 * @n: number of bytes to filled
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
