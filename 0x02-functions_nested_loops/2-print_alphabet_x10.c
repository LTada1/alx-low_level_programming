#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- is funtction
 *
 * Description:This program will print a-z,
 * in 10 differrent lines
 *
 * return:Always 0 success
 */

void print_alphabet_x10(void)
{
	char lu;
	char ka;

	for (lu = 48; lu <= 57; lu++)
	{
		for (ka = 'a'; ka <= 'z'; ka++)
		{
			_putchar(ka);
		}
		_putchar('\n');
	}
}
