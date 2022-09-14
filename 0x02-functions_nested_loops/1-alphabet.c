#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
