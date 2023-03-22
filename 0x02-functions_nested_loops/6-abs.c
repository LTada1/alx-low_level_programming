#include "main.h"
/**
 * _abs - checks for lowercase character
 * @c: Variable
 * Return: Always absolute
 */

int _abs(int c)
{
	if (c >= 0)
		c = (0 + c);
	else
		c = (c * -1);

	return (c);
}
