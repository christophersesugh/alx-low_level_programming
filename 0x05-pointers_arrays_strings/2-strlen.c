#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string which its length is to be returned
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		length++;
		s++;
	}
	_putchar('\n');
	return (length);
}
