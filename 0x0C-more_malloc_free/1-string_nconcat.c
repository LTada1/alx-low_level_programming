#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @n: number of bytes
 * @s1: string variable
 * @s2: string variable
 *
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int a, b;
unsigned int i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
a = strlen(s1);
b = strlen(s2);
str = malloc(sizeof(char) * (a + n + 1));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
str[i] = s1[i];
}
for (j = 0; j < n && j < b; j++)
{
str[i + j] = s2[j];
}
str[a + n] = '\0';
return (str);
}
