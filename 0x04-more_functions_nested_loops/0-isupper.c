#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: The character to be checked
 * Return: 1 if character is uppercase and 0 if character is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
