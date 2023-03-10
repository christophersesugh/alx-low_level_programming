#include "main.h"

/**
 * str_len - returns the length of a string
 * @s: string length to be returned
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{ 
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return is_palindrome(s + 1);
	}
	else
	{
		return (0);
	}
}
