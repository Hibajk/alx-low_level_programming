#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *mee;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	mee = malloc(sizeof(char) * (i + 1));

	if (mee == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		mee[r] = str[r];

	return (mee);
}
