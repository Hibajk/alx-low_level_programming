#include "main.h"

/**
 * set_bit - sets bit at index
 * @n: num to index
 * @index: bit to set
 *
 * Return: 1 successful, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
