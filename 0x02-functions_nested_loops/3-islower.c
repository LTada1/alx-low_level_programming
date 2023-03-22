#include <stdio.h>
/**
 * _islower - checks for lowercase character
 * @c: Variable
 * Return: Always 0 Success
 */

int _islower(int c)
{
	c = 97;
	if (c <= 122)
		return (1);
	else
		return (0);
}
