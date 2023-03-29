#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @*a: Pointer Variable
 * @n: Argument
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for (; *a != '\n'; a++)
	{
		_putchar(*a);
		if (*a)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
  
