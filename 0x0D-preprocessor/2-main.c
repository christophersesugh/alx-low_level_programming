#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * Return: 1
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
