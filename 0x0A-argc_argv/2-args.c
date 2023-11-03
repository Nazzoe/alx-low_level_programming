#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments passed
 * @argc: Number of CL  arguments
 * @argv: Array
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

