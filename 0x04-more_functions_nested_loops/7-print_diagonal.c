#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Interger to print
 * Return: Return 0 on success
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
				_putchar(92);
		_putchar('\n');
																				}
	}
	else
		_putchar('\n');
}
