#include<stdio.h>

/**
 * main- Entry point
 *putchar:prints alphabet in lowercase
 *al:is a variable
 *
 * Return:Always 0 success
 *
 */

int main(void)
{
	char al = 'a';
	while (al< 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);

}
