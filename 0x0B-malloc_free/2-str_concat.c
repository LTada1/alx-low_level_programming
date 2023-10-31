#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - copies a string
 * @s1: String Variable
 * @s2: String Variable
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int n;
	int m;
	char *dest;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	n = strlen(s1);
	m = strlen(s2);
	dest = (char *)malloc(sizeof(char) * (n + m + 1));
	if (dest == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < m && s1[i] != 0; i++)
	{
		dest[i] = s1[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	for (i = 0; s2[i]; i++)
	{
		dest[n++] = s2[i];
	}
	return (dest);
}
