#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer Variable
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, n, m;

	m = 2;
	n = str / m;
	for (str[i] = n; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
