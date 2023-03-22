#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: Variable
 * Return: Always absolute
 */

int print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
