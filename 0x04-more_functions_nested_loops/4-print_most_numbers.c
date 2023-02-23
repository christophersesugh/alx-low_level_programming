#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 with 2 and 4 as exceptions
 * Return: 0
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if (number == 50 && number == 56)
			continue;
		_putchar(number);
	}
	_putchar('\n');
}
