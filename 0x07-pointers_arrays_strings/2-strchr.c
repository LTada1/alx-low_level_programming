#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: strings
 * @c: occurance to be checked
 *
 * Return: pointer to the first occurance of character
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			break;
	}
	return (s);
}
