#include "main.h"

/**
 * _isdigit -Function that checks for a digits.
* @c: Input to be tested
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

		for (; i <= '9'; i++)
		{
			if (i == c)
			{
				isdigit = 1;
				break;
			}
		}

	return (isdigit);
}
