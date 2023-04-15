#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string variable
 * @: string variable two
 * @n: intger variable

 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cate;
	unsigned int len1, len2;
	
	cate = malloc(sizeof(char)*(*s1)*(n+1));
	len2 = strlen(s1);
	if (n >= strlen(s2))
	for (len1 = 0; len1 < n && *s2 != '\0'; len1++)
	{
		 s1[len2++] = s2[len1];
	}
	/*else
		for (len1 = 0; *s2 != 0; len1++)
		{
			s1[len2++] = s2[len1];
		}*/
	if (cate == NULL)
		return (NULL);
	return (cate);
}
