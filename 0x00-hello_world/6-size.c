#include<stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char Character;
	int Integer;
	long Long;
	long long Long_Long;
	float a_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(Character));
	printf("Size of an int: %lu byte(s)\n", sizeof(Integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Long_Long));
	printf("Size of a float: %lu byte(s)\n", sizeof(a_float));

	return(0);
} 
