#include "main.h"
#include <stdio.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: argurment vector
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
