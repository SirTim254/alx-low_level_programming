#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: pointer to string to count
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
