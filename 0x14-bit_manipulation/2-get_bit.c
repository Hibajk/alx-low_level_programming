#include "main.h"

/**
 * get_bit - return value of a bit
 * @n: number to search
 * @index: bit to get
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
