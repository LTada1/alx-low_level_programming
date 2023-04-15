#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size 
 *
 * Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *chat;
	
	chat = malloc(b);
	if (chat == NULL)
		exit(98);
	
	return (chat);
}
