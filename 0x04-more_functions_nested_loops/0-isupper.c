#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
/**
 *c > A
 * c < Z
 */
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
