#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string which its length is to be returned
 * Return: nothing
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	_putchar('\n');
	return (count);
}
