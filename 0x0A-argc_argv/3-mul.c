#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two arguments and prints the products
 * @argc: Number of CL arguments
 * @argv: Name of array
 * Return: 1 if not enough arguments passed in ie false, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}

