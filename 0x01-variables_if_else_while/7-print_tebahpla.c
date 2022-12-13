#include<stdio.h>
/**
 * main- Entry Point
 *
 *
 *
 *
 *
 * Return:Always 0 success
 *
 */

int main(void)
{
	char al = 'z';
	
	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');
	return (0);
}
