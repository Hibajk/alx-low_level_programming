#include "main.h"
#include <stdio.h>

/**
 * main - program that prints num of arg passed into it
 * @argc: num of arg
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
