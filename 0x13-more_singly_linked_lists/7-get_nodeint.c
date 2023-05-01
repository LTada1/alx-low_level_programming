#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list.
 * @head: A variable of pointer to struct
 * @index: nth number of node
 *
 * Return: pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *tmp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; tmp != NULL; i++)
	{
		if (i == index)
			break;
		tmp = tmp->next;
	}
	return (tmp);
}
