#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string pointer
 *
 * Return: pointer.
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j;

	for (i = 0; str[i] != '\0'; )
	{
		i++;
	}

	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		str2[j] = str[j];
	}

	return (str2);
}
