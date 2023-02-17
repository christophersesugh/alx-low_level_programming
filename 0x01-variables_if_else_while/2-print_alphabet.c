#include <stdio.h>

/**
 * main - print alphabet followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmno";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar("\n");

	return (0);
}
