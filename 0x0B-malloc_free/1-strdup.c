#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
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
