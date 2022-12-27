#include<stdio.h>
#include"main.h"

/**
 * _islower - check the code.
 *
 * Return: Always 0 success
 */

int _islower(int c)
{
    if (c<= 'z' && c<= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
