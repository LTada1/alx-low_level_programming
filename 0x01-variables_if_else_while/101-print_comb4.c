#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((i != j) != k && (i < j) < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
