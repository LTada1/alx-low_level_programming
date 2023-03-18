#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */

int main(void)
{
	int num_b;

	num_b = 48;

	while (num_b <= 57)
	{
		putchar(num_b);
		num_b++;
	}
	putchar('\n');

	return (0);
}
