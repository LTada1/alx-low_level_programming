#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  *_strcat - concatenates two strings.
 * @dest: Pointer Variable
 * @src: Pointer Variable
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
int **array;
int i;
int j;

if ((width == 0 || height == 0) || (width < 0 || height < 0))
{
return (NULL);
}
array = (int**)malloc(sizeof(int*) * height);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
}
for (i = 0; i < height; i++)
{
for(j = 1; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
