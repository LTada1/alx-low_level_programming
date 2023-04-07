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
	int len, i;

	len = 0;
	i = 0;
	s++;
	i++;
	len++;
	if (s[i] != '\0')
		_strlen_recursion(s);
	else
		_putchar(len);
	return (0);
}
