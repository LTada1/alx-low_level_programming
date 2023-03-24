#include "main.h"
/**
 * print_numbers - checks for lowercase character
 * @c: Variable
 * Return: Always absolute
 */

void print_numbers(void)
{
	int c;

	c = 48;
	while (c >= 48 && c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
