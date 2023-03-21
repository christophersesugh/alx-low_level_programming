#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL) return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
