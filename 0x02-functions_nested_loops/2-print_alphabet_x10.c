#include "main.h"

/**
 * print_alphabet_x10  - Print lower case alphabets from a - z 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int idx, char_code;
	for (idx = 0; idx < 10; idx++)
	{
		for (char_code = 97; char_code < 123; char_code++)
		{
			_putchar(char_code);
		}
		_putchar('\n');
	}
}
