#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: primary string
 * @src: copied string
 * @n: num of chars
 * Return: destptr
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
