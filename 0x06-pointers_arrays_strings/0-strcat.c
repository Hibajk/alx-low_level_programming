#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: first string
 * @dest: second string
 * Return: the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *destptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (destptr);
}
