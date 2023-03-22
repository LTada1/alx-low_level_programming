#include "main.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 * Return: On success void
 */

void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;
	while (i <= 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		i++;
	}
}
