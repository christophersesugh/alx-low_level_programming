#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */
void print_rev(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		idx++;
	}

	while (idx > 0)
	{
		idx--;
		_putchar(s[idx]);
	}
	_putchar('\n');
}
