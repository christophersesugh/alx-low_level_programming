#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char sen[] = "and that piece of art is useful\"
		- Dora Korpar, 2015-10-19\n";

	write(2, sen, 59);
	return (1);
}
