#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given array of integers
 * @size: size of the given array of integers
 * @cmp: function pointer to the function to compare values
 * Return: an integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
