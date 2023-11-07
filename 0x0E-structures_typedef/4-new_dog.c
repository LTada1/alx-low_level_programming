#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
int i, len1, len2;

len1 = strlen(name);
len2 = strlen(owner);
dog_n = malloc(sizeof(struct dog));
if (dog_n == NULL)
return (NULL);
dog_n->name = malloc(sizeof(char) * (len1  + 1));
if (dog_n->name == NULL)
{
free(dog_n);
return (NULL);
}
dog_n->owner = malloc(sizeof(char) * (len2 + 1));
if (dog_n->owner == NULL)
{
free(dog_n);
free(dog_n->name);
return (NULL);
}
for (i = 0; i < len1; i++)
	dog_n->name[i] = name[i];
dog_n->name[i] = '\0';
for (i = 0; i < len2; i++)
	dog_n->owner[i] = owner[i];
dog_n->owner[i] = '\0';
dog_n->age = age;
return (dog_n);
}
