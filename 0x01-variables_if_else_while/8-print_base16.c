#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */

int main(void)
{
	char abc;
	int numb;

	numb = 48;
	abc = 'a';
	while (abc <= 'f')
	{
		if (numb != 57)
		while (numb <= 57)
		{
			putchar(numb);
			numb++;
		}
		putchar(abc);
		abc++;
	}
	putchar('\n');

	return (0);
}
