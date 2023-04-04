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
	int len1, len2;

	for (len1 = 0; *accept == '\0'; accept++)
	{
		len1++;
	}
	for (len2 = 0; *s != '\0'; s++)
	{
		if (*s == *accept)
			break;
		len2++;
	}
	return (len2 + 1);
}
