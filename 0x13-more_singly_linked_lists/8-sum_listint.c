#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Adds all elements of a list.
 * @head: A variable of pointer to struct
 *
 * Return: pointer.
 */

int sum_listint(listint_t *head)
{
	int i, sum = 0;
	struct listint_s *tmp = head;

	if (head == NULL)
		return (0);
	for (i = 0; tmp != NULL; i++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
