#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * digitcheck - check digit in string
 * @str: string arguments
 *
 * Return: On success 0.
 */
int digitcheck(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: count number of arguments
 * @argv: number of strings
 *
 * Return: on 0 success.
 */

int main(int argc, char *argv[])
{
	int ad_d, i, x;

	ad_d = 0;
	for (i = 1; i < argc; i++)
	{
		if (digitcheck(argv[i]))
		{
			x = strtol(argv[i], NULL, 10);
			ad_d += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", ad_d);

	return (0);
}
