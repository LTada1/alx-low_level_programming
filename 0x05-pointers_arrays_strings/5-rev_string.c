#include "main.h"
#include <stdio.h>

/**
 *  rev_string -  reverses a string
 * @s: Pointer Variable
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, n;

	length = 0;
	for (; *s != '\0'; s++)
	{
		length++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
