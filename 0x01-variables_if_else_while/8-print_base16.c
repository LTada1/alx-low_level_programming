#include<stdio.h>

/**
 * main- Entry goint
 * putchar:function
 *
 * Retrun: Always 0 (Success)
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
	return (0); /* return an integer*/
}
