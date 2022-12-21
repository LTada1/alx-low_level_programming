#include<stdio.h>
#include "main.h"

/**
 * main-makes a function
 * reset_to_98():takes a pointer to an int as parameter and updates the value it points to to 98
 * p:variable
 *
 * Return:Always 0 success
 */

void reset_to_98(int *n)
{	
	*n = 98;
}


int main(void)
{
	int n;
	
	n = 402;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n)
	return (0);

}
