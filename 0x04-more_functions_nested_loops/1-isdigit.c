#include "main.h"

/**
 * _isdigit - Check if given value is a digit
 * @c: The value  to be checked
 * Return: 1 if character is uppercase and 0 if character is lowercase
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
