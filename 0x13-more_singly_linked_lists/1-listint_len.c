#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Count number of elements in a list.
 * @h: A variable of pointer to struct
 *
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
