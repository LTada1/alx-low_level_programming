#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter,
 *  on each element of an array.
 * @size: size of the array
 * @array: pointer to array
 * @action: pointer to a function
 *
 * Return: Does not return;
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL || size == 0)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
