#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: Variable
 * @s2: Variable
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
