#include <stdio.h>
#include <string.h>
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
		putchar(str[i]);
		str++;
	}
	putchar('\n');

	return (0);
}
