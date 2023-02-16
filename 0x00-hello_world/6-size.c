#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("char: %d bytes\n", sizeof(char));
	printf("int: %d bytes\n", sizeof(int));
	printf("long int: %d bytes\n", sizeof(long int));
	printf("long long int: %d bytes\n", sizeof(long long int));
	printf("float: %d bytes\n", sizeof(float));
	return (0);
}
