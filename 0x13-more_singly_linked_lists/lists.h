#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to next node on the list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listInt_t;

size_t print_listint(const listint_t *h);

#endif
