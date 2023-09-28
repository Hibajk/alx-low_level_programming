#include "main.h"

/**
 * flip_bits - returns the num of bits
 * @n: 1st num
 * @m: 2nd num
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{

		count += x & 1;
		x >>= 1;
	}
	return (count);
}
