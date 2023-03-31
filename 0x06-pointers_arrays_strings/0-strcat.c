#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  *_strcat - concatenates two strings.
 * @dest: Pointer Variable
 * @src: Pointer Variable
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	len2 = strlen(dest);
	for (len1 = 0; src[len1]; len1++)
	{
		dest[len2++] = src[len1];
	}
	return (dest);
}
