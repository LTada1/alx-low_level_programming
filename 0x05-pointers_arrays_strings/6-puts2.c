#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: Pointer argument
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
