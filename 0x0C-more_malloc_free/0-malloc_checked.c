#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry fxn
 * @b: input
 * Return: 0 if successful
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

