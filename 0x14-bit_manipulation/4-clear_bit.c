#include "main.h"

/**
 * clear_bit - sets bit at index
 * @n: num to index
 * @index: bit that needs to be cleared
 *
 * Return: 1 success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
