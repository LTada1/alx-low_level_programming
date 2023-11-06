#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new struct
 * @name: member of struct
 * @owner: member of struct
 * @age: member of struct
 * Return: Does not return;
*/

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dog_n;

dog_n = malloc(sizeof(struct dog));
if (dog_n == NULL)
{
return (NULL);
}
dog_n->name = name;
dog_n->owner = owner;
dog_n->age = age;
return (dog_n);
}
