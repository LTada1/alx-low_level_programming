#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * argstostr - prints program name
 * @ac: argument count
 * @av: array of charcters
 *
 * Return: nothing
 */

char *argstostr(int ac, char **av)
{
int i;
char *str;

if (ac == 0 || av == NULL)
{
return (NULL);
}
str = (char *)malloc(sizeof(char) * ac);
for (i = 0; i < ac; i++)
{
str[i] += av[i];
}
for (i = 0; i < ac; i++)
{
printf("%s\n", str[i]);
}
return (str);
}
