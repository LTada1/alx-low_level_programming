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
	for (*s = 'v'; *s != '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
