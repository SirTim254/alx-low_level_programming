#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 *@vw: number to be passed to the function
 *Return: Return zero on success.
 */

int print_last_digit(int vw)

{

	vw = vw % 10;

		if (vw < 0)

			vw = -vw;

			_putchar(vw + '0');

		return (vw);

}
