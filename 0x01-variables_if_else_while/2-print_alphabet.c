#include <stdio.h>

/**
 * main - print alphabet followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');

	return (0);
}
