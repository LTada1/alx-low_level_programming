#include<stdio.h>
#include "main.h"

/**
 * main- prints the alphabet, in lowercase, followed by a new line
 *
 *
 *
 * Return:Always 0 success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
}

int main(void)
{
	print_alphabet();
	return (0);
}
