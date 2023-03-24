#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int number;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);
		printf("%d", number);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
