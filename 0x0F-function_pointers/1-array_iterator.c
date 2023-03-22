#include "function_pointers.h"

/**
 * array_iterator - executes a function paramter of an array element
 * @array: given array of elements
 * @size: size of the array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
