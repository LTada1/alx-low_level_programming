#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint -adds node at the beginning.
 * @head: A variable of pointer to struct
 * @n: size of list
 *
 * Return: Number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(struct listint_s));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

