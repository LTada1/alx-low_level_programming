#include<stdio.h>

/**
 * main- Entry goint
 * putchar: print all base 16 digits
 *
 * Description: print all hex number
 *
 * Retrun:Always 0 success
 */

int main(void) /*returns an int*/
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
