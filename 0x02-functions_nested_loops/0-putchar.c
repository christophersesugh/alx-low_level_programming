#include "main.h"

/**
 * main - Prints _putchar followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int char_codes[] = {95,70,117,116,99,104,97,114};
	int idx, size;

	size = sizeof(char_codes) / sizeof(int);
	for (idx = 0; idx < size; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
	return (0);
}
