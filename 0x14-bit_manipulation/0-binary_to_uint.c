#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: point to a string of binaries
 * Return: the converted number or 0 if there is a wrong string or b is NUL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, i;
	char c;

	len = 0;
	result = 0;
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		c = b[i];
		if (c == '1')
			result = (result << 1) + 1;
		else if (c == '0')
			result <<= 1;
		else
			return (0);
	}
	return (result);
}
