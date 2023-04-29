#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds node at the end of a list.
 * @head: A variable of pointer to struct
 * @str: string pointer
 * @n: size of list
 *
 * Return: pointer.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	struct list_s *tmp;
	struct list_s *ptr = (*head);

	while (str[len])
	{
		len++;
	}
	tmp = malloc(sizeof(struct list_s));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
