#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function tha concatenates 2 strings
 * @s1: first input string
 * @s2: second one
 * @n: max num of chars
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, h, b, c = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	h = strlen(s1);
	b = strlen(s2);
	s = malloc(sizeof(char) * (h + n + 1));
	if (s == NULL)
		return (NULL);

	while (i < (h + b))
	{
		if (i < h)
		s[i] = s1[i];

		else if (i >= h && c < n)
		{
			s[i] = s2[c];
			c++;
		}
		i++;
	}
	if (n <= b)
		s[h + n] = '\0';
	if (n > b)
		s[h + b] = '\0';
	return (s);
}
