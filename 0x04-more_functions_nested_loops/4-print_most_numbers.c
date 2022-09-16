#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers from 0 to 9.
 * Excluding 2 and 4 followed by a new line.
 * Return: Return zero on success
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
		_putchar('\n');
}
