#include<stdio.h>
#include"main.h"

/**
 * main-Entry Point
 * print_alphabet
 *
 * Description: This program print alphabets a-z,
 * and a new line
 *
 * Return:Always 0 success
 */

void print_alphabet(void)
{
	char lu;
	for (lu = 'a'; lu <= 'z'; lu++)
	{
		_putchar(lu);
	}
	_putchar('\n');
}
