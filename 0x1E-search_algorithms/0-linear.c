#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * using linear search algo
 * @array: array to search from
 * @size: size of the array
 * @value: value we're searching for
 * Return: given value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
