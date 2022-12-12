#include<stdio.h>

/**
 * main- Entry point
 *putchar:prints alphabbet in small and capital letter
 *al:is a variable
 *
 * Return:Always 0 success
 */

int main(void)
{
	char al = 'a';
	char al2 = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (al2 <= 'Z')
	{
		putchar(al2);
		al2++;
	}
	putchar('\n');
	return (0);
	
}

