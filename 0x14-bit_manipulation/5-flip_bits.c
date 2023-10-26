#include "main.h"

/**
 * flip_bits - returns num of bits that needs to be flipped to
 * @n: first num
 * @m: second num
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{

		count += xorval & 1;
		xorval >>= 1;
	}
	return (count);
}
