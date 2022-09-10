#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all letters exept q & e
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');

	return (0);
}
