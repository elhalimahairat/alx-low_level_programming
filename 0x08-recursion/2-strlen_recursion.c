#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
int m;
m = 1;
if (*s == '\0')
	return (0);
return (m + _strlen_recursion(s + 1));
}
