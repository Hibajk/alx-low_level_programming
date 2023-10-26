#include "main.h"

/**
 * get_endianness - return the endianness of system
 *
 * Return: 0, 1 if small
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
