#include "main.h"

/**
 * print_alphabet - Print lower case alphabets from a - z
 * @char_code: ASCII character code
 * @last_char_code: Last ASCII character code in the given range.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int char_code, last_char_code = 123;

	for (char_code = 97; char_code < last_char_code; char_code++)
	{
		_putchar(char_code);
	}
	_putchar('\n');
}
