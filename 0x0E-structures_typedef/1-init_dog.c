#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes struct
 * @d: struct type
 * @name: member of struct
 * @owner: member of struct
 * @age: member of struct
 * Return: Does not return;
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
