#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: Pointer argument
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
