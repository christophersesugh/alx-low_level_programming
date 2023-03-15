#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the concatenated string from s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t len1, len2, i;

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;

	s3 = malloc((len1 + len2) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = len1; i < len2; i++)
	{
		s3[i] = s2[i];
	}
	s3[i++] = '\0';
	return (s3);
}
