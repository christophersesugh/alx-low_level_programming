#include <stdio.h>

/**
 * main - print numbers in base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
