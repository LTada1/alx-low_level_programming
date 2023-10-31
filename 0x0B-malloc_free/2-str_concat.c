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
	int j;
	char *dest;

	if (s1 == NULL || s1[0] == '\0')
	{
		s1 = " ";
	}
	if (s2 == NULL || s2[0] == '\0')
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
	for (i = 0; s1[i] != 0; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		dest[i + j] = s2[j];
	}
	dest[m + n] = '\0';
	return (dest);
}
