#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * putchar: Print character one at a time
 * @str: Variable
 * @i: Variable
 *
 * Return: 1
 */

int main(void)
{
	long unsigned int i = 0;
	char str [58] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (i <= strlen(str))
	{
		putchar(strlen(str));
	}
	putchar('\n');

	return (1);
}
