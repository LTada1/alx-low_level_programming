#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: argurment vector
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int ad_d, i;

	ad_d = 0;
	(void) argc;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);
			char y = 48;

			if (x  >= y)
			ad_d += x;
			else
				printf("Error\n");
		}
		printf("%d\n", ad_d);
	}
	else
		printf("0\n");
	return (1);
}
