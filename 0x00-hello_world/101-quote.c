#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the sentence as specified for task 101-quote.c
 * followed by a new line to the standard error
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
