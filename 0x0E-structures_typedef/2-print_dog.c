#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Initializes struct
 * @d: struct type
 * Return: Does not return;
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d != NULL)
{
if (d->name == NULL)
{
printf("name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->age == 0)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
return;
}
