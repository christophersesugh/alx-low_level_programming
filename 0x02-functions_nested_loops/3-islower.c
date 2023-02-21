#include "main.h"

/**
 * main - Check for lower characters
 * @c: Character to be checked
 * Return: Always 0
 */
int _islower(int c)
{
	if(c >= 97 || c <= 122)
	{
		return 1;
	}
	_putchar('\n');
	return (0);
}
