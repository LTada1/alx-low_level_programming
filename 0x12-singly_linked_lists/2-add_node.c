#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - return number of elements in list.
 * @head: A variable of pointer to struct
 * @str: string pointer
 * @n: size of list
 *
 * Return: pointer.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	struct list_s *tmp;

	while (str[len])
	{
		len++;
	}
	tmp = malloc(sizeof(struct list_s));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = (*head);
	(*head) = tmp;
	return (*head);
}
