#include "main.h"

/**
 * print_number - Prints an integer.
 * @nmbr: The integer to be printed.
 */

void print_number(int nmbr)
{
	unsigned int x = nmbr;

	if (nmbr < 0)
	{
		_putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
