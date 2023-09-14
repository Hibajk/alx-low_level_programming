#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints nums
 * @n: num of int
 * @separator: string to be printed
 * @...: variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
