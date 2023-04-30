#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds node to end list.
 * @head: A variable of pointer to struct
 * @n: size of list
 *
 * Return: pointer.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (*head);
}
