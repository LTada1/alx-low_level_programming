#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Initializes a struct type
 * @d: member
 *
 * Return: null.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
