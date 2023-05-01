#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes head of list.
 * @head: A variable of pointer to struct
 *
 * Return: Success.
 */

int pop_listint(listint_t **head)
{
	struct listint_s *tmp;
	int no;

	if (*head == NULL)
		return (0);
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		no = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (no);
}
