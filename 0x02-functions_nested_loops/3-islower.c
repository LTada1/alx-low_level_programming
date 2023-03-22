#include <stdio.h>
/**
 * main - Entry point
 * _islower: checks for lowercase character
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
