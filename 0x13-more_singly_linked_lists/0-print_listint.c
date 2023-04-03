#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h == NULL)
			return (NULL);
		printf("%d", h->n);
		count++;
	}
	return (count);
}
