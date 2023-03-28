#include "main.h"
#include <string.h>

/**
 * _puts - Print strings
 * @str: Variable
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
