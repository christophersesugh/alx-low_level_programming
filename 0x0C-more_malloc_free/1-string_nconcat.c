#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes for s2
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	s3 = malloc((len1 + n + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s3[len1 + i] = s2[i];
	}
	s3[len1 + n] = '\0';
	return (s3);
}
