#include<stdio.h>

/**
 * main- Entry Point
 *putchar: print all base 16 digits
 *
 *
 *
 *
 *
 * Retrun:Always 0 success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
