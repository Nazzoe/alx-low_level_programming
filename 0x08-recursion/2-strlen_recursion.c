#include "main.h"
/**
 * _strlen_recursion-  Length of String Function
 * @s: string
 *
 * Return: On success 1.
 * Return: recursive length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

