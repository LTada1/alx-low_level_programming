#include<stdio.h>
#include"main.h"

/**
 *  _abs - check the code.
 * @b: Any integer value
 *
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

