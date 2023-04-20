#include "function_pointers.h"

/**
 * int_index - Searches for the array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
	return (-1);
	}
	for (int i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	}
	return (-1);
}


