#include "main.h"
/**
 *  print_most_numbers - prints digit and ommit others
 * Return: Always absolute
 */

void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c >= 48 && c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
