#include "function_pointers.h"

/**
 * int_index - returns index of first element matched by cmp
 * @array: array of integers
 * @size: number of elements
 * @cmp: pointer to comparison function
 *
 * Return: index or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
