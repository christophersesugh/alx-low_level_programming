#include <stdio.h>

/**
 * main - print alphabet followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char* alphabets = "abcdefghijklmnopqrstuvwxyz";
	char* line_break = "\n";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar(line_break);

	return (0);
}
