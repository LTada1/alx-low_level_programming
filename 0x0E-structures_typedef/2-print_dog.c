#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Print struct dog
 * @d: A pointer to struct
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,d->age,d->owner);
}