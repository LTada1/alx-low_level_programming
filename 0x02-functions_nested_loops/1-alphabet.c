#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 * Return: On success void
 */

void print_alphabet(void)
{
	char abc;

	abc = 'a';
	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
