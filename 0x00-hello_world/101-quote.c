#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * putchar: Print character one at a time
 *
 * Return: 1
 */

int main(void)
{
	int i = 0;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (i < strlen(str))
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

	return (1);
}
