#include <stdio.h>

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
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
else
printf("No argument found\n");
return (0);
}
