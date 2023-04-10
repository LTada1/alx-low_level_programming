#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String Variable
 * @accept: string Variable
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s )
		}
	}
	return (s);
}
