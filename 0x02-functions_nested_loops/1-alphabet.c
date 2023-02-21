#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet();

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int char_code, last_char_code = 123;

	for (char_code = 97; char_code < last_char_code; char_code++)
	{
		_putchar(char_code);
	}
	_putchar('\n');
}
