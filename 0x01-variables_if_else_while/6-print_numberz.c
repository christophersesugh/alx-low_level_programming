#include <stdio.h>

/**
 * main - print numbers in base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	do {
		putchar(i);
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
