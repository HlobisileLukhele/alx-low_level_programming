#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
