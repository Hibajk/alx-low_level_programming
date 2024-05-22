#include "search_algos.h"

/**
 * binary_search - fucntion that searches for a value in a sorted array
 * using binary search
 * @array: array we'll be searching in
 * @size: size of that beautiful sorted array
 * @value: value we're looking for
 * Return: element we are looking for will be returned
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;
	size_t i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
