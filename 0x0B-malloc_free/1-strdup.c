#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: size of array
 *
 * Return: returns a pointer to a newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *dup_cate;
	unsigned int n;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	n = strlen(str);
	dup_cate = (char *)malloc((sizeof(char) * n) + 1);
	if (dup_cate == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < n && str[i] != 0; i++)
	{
	dup_cate[i] = str[i];
	}
	for ( ; i < n; i++)
	{
		dup_cate[i] = '\0';
	}
	return (dup_cate);
}
