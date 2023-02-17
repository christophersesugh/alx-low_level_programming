#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n == 0)
		printf("%d is zero", n);
	if(n < 0)
		printf("%d is negative", n);
	if(n > 0)
		printf("%d is positive", n);
	return (0);
}
