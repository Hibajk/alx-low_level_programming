#include "main.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: first char
 * @s2: second char
 * Return: if char *s1 == char *s2 return 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
