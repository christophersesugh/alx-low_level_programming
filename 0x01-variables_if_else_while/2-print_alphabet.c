#include <stdio.h>

/**
 * main - print alphabet followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
