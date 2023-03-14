#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: character to initialize the created array
 * Return: pointer to the created array or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while(i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
