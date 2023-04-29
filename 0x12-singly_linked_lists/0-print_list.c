#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/** size_t print_list - prints all the elements.
 * @h: A variable of pointer to struct
 * @: size of list
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
