#include "main.h"

/**
 *Main - Start of the programme
 *_putchar - writes the character c to standard output
 *main: The character to print
 *Return: return zeroo on sucess
 */



int main(void)

{
	char *sh = "_putchar";
		while (*sh)
{
		_putchar(*sh);
		sh++;
}
	_putchar('\n');
		return (0);

}
