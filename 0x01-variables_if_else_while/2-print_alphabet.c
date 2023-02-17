#include <stdio.h>

/**
 * main - print alphabet followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char* alphabets = "abcdefghijklmnopqrstuvwxyz";
	char* l = alphabets;

	for (i = 0; i < 26; i++)
	{
		putchar((int) *l);
	}
	putchar("\n");

	return (0);
}
