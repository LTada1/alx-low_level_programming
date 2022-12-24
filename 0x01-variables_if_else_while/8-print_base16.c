#include<stdio.h>

/**
 * main- Entry goint
g*putchar: print all base 16 digits
 *
 *
 *
 * Retrun:Always 0 success
 */

int main(void)
{
	int lu;
	char ka;

	for (lu = 48; lu <= 57; lu++)
	{
		putchar(lu);
		if (lu <= 9)
			break;
	}
	for (ka = 'a'; ka <= 'f'; ka++)
	{
		putchar(ka);
	}
	putchar('\n');
	return (0);
}
