#include "main.h"
/**
 * _isdigit - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is betwin 0-9, 0 otherwise
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
return (0);
}
