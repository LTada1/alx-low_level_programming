#include "main.h"
#include <stdio.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * argv@: argurment vector
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	(void) argv[0];
	return (0);
}
