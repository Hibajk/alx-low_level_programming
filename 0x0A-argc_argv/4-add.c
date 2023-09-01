#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: num of cariables
 * @argv: string of variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int a = 0;

	if (argc == 1)
		printf("0\n");
	while (i < argc)
	{
		/*if (*argv[i] < 48 ||*argv[i] > 57)*/
		if (strspn(argv[i], "0123456789") != strlen(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			a = a + atoi(argv[i]);
		i++;
	}
	if (a != 0)
		printf("%d\n", a);
	return (0);
}
