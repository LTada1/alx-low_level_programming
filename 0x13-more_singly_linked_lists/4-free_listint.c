#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees list.
 * @head: A variable of pointer to struct
 *
 * Return: pointer.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		free(head);
	}
	else
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
