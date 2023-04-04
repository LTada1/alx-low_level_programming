#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * @s: the address that points to starting memory
 * @b: the size of the byte to be filled
 * @n: number of bytes to be filled
 *
 * Return: s, pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


