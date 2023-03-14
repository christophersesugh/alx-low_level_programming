#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: duplicate of the original string
 */
char *_strdup(char *str)
{
	char *copy;
	size_t len, i;


	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	copy = malloc((len) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	free(copy);
	return (copy);
}
