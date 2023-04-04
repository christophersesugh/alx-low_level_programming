#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list head
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h == NULL)
			return (0);
		h = h->next;
		count++;
	}
	return (count);
}
