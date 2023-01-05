#include <stdio.h>
#include<stdio.h>

/**
 *swap_int -swap the value of two variables
 *@a:an argument
 *@b:an argument
 * Description: digits should not be repeated twice
 * Return: Always(0) Success
*/

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
