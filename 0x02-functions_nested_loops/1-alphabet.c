#include<stdio.h>
#include"main.h"

/**
 * print_alphabet- print a-z alphabet
 *
 * Description: This program print alphabets a-z,
 * and a new line
 *
 * Return:Always 0 success
 */

void print_alphabet(void)/* This program prints alphabets a-z*/
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
	{
		_putchar(lu);
	}
	_putchar('\n');
}
