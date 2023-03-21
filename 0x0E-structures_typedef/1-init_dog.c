#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';

	d->age = age;

	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
}
