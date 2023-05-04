#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A variable of pointer to struct
 * @idx: nth position
 * @n: data
 *
 * Return: pointer.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	struct listint_s *New_Node;
	struct listint_s *tmp = *head;
	unsigned int i;

	New_Node = malloc(sizeof(struct listint_s));
	if (New_Node == NULL)
		return (NULL);
	else if (*head == NULL && idx == 0)
	{
		New_Node->next = *head;
		*head = New_Node;
		return (*head);
	}
	else if (idx > 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (tmp->next == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		New_Node->next = tmp->next;
		tmp->next = New_Node;
		New_Node->n = n;
		return (New_Node);
	}
	else
		tmp = tmp->next;
	return (NULL);
}
