#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string whose segment is considered
 * @accept: string which referrence the length to be considered
 *
 * Return: number of bytes
 */

int _strspn(char *s, char *accept)
{
	int len2 = 0;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			len2++;
			if (*s == *accept)
				break;
		}
	}
	return (len2);
}
