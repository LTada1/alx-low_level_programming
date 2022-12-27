#include<stdio.h>
#include"main.h"

/**
 * b - Any integer value
 *
 *  _abs - check the code.
 *
 * Return: Always 0 success
 */

int _abs(int b)
{
	if (b < 0)
	{
		int abs_val;

		abs_val	= b * -1;
		return (abs_val);
	}
	return (b);
}

