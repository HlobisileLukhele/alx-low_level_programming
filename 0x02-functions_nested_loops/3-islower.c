#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character input
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
