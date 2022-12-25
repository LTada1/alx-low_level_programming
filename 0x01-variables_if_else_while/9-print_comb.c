#include<stdio.h>

/**
 * main- Entry Point
 * ptchar: function
 * ch: variable
 *
 * Description: This program print numbers using unformatted output function
 * Return:Always 0 success
 */

int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
		if (ch <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
