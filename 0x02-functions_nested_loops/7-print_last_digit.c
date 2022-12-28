#include<stdio.h>
#include"main.h"

/**
 *  _abs - check the code.
 * : Any character to be checked
 *
 * Return: Always 0 success
 */

int print_last_digit(int i)
{
int last_digit;
	
last_digit=i%10;
if (last_digit<0)
{
last_digit=last_digit * -1;
putchar(last_digit + '0');
}
return(last_digit);
}

