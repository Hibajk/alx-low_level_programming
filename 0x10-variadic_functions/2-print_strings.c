#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed
 * @n: num of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	if (separator == NULL)
	separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	x = va_arg(args, char *);

	if (x == NULL)
	x = "(nil)";

	printf("%s", x);
	if (i < n - 1)
	printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
