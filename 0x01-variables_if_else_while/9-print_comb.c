#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
  */

int main(void)
{
	int numb;

	numb = 48;

	while (numb <= 57)
	{
		putchar(numb);
		if (numb != 57)
		putchar(44);
		putchar(32);
		numb++;
	}
	putchar('\n');

	return (0);
}
