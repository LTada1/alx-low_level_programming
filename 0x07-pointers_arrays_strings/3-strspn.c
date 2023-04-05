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
		for (; *accept != '\0'; accept++)
		{
			len2++;
			if (*s == *accept)
			{
				break;
			}
			else if (*accept + 1 == '\0')
				return (len2);
		}
	}
	return (len2);
}
