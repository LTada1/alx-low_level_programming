#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */

int main(void)
{
	char str[] = "_putchar";
	unsigned int i = 0;

	while (i <= strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
