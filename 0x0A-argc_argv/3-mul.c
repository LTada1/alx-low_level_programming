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
	int multi, i;

	multi = 1;
	(void) argc;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			multi *= x;
		}
		printf("%d\n", multi);
	}
	else
		printf("Error\n");
	return (0);
}
