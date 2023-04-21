#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * @array: pointer toparameters
 * @action: a pointer to a function
 * @size: size of an array
 *
 * Return: null.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
