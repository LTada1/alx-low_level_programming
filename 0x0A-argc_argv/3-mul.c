#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: array of charcters
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
int i;
int result = 1;
int numb;

if (argc != 3)
{
printf("Eroor\n");
return (1);
}
for (i = 1; i < argc; i++)
{
char *endptr;
numb = strtol(argv[i], &endptr, 10);
if (*endptr != '\0' && !isspace(*endptr))
{
	printf("string convert failure\n");
	return (0);
}
result *= numb;
}
printf("%d\n", result);
return (0);
}
