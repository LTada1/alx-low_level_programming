#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line
 * @s: string litteral
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	i++;
	s++;
	if (*s != '\0')
	{
		_print_rev_recursion(s);
	}
	s--;
	_putchar(*s);
	i--;
	if (i >= 0)
	{
		 s--;
	}
	else
		_putchar('\n');
}
