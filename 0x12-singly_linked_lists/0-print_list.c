#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}

