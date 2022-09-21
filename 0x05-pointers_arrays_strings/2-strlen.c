#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * return value of _strlen: return the lenghth of a string
 * return: returns  length as integer;
 * Description: returns the length of a string
 */
int _strlen(char *s)
{int len = 0;
while (*(s + len) != '\0')
len++;
return (len); }
