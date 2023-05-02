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

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	struct listint_s *ptr, *tmp;

	index = 0;
	i = 0;
	ptr = *head;
	if (*head == NULL)
		return (-1);
	else if (index == 1)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	else
	{
		while (i == index-1)
		{
			tmp = ptr;
			tmp = tmp->next;
			i++;
		}
		ptr = tmp->next;
		tmp->next = ptr->next;
		free(ptr);
	}
	return (1);
}
