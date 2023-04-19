#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a struct type
 * @name: member
 * @age: member
 * @owner: member
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
