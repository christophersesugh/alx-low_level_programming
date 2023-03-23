#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all its parameters
 * @n: fixed argument
 * @...: rest of the function's arguments
 * Return: sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;
	va_start(args, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_args(args, int);
		}
	}
	va_end(args);
	return (sum);
}
