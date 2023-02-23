#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int number = 48;

	while (number < 58)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
	return (0);
}
