#include "main.h"
#include <stdio.h>

/**
 *  print_rev - Print strings in reverse
 * @s: Pointer
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length, n;

	length = 0;
	for (; *s != '\0'; s++)
	{
		length++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
