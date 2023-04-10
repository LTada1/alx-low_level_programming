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
	int len1, len2;

	while (len1 == len2)
	{
		len1++;
		len2++;
	}

	return (len1 - len2);
}
