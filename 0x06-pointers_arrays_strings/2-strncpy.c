#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1, len2;

	len2 = strlen(dest);
	for (len1 = 0; len1 < n && *src != 0; len1++)
	{
		dest[len2] = src[len1];
		dest[len2] = '\0';
	}
	return (dest);
}
