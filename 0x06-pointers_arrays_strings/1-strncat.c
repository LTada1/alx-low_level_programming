#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat -  concatenates two strings
 * @dest: Varaible
 * @src: Variable
 * @n: Variable
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len2 = strlen(dest);
	for (len1 = 0; len1 < n && *src != 0; len1++)
	{
		dest[len2++] = src[len1];
	}
	return (dest);
}
