#include "dog.h"
#include <stdlib.h>
/**
 *  _strlen - Measure the length of string
 * @s: Pointer to string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcpy - copy string
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to char.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
		dest[j] = src[j];

	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - Initializes a struct type
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = _strcpy(doge->name, name);
	doge->age = age;
	doge->owner = _strcpy(doge->owner, owner);

	return (doge);
}
