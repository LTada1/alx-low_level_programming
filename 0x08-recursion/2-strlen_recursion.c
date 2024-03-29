#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return string length
 * @s: string literal
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	l++;
	s++;
	if (*s != '\0')
	{
		l += _strlen_recursion(s);
	}
	return (l);
}
