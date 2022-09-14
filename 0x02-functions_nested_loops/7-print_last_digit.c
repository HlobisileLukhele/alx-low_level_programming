#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: input number
 *
 * Return: last digit of a number
 */
int print_last_digit(int r)
{
	if ( r < 0)
	{
		r = (r * (-1)) % 10;
	}
	else
	{
		r = r % 10;
	}
	_putchar(r + '0');

	return (r);
}
