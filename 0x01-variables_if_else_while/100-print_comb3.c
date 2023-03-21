#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 49;
	while (i <= 57)
	{
		if (i < j && i != j)
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
