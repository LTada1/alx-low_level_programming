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

        int last_digit=i%10;

        printf("%d", last_digit);
        return(last_digit);
}

