#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free linked lis.
 * @head: A variable of pointer to struct
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	struct list_s *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
	free(ptr);
}
