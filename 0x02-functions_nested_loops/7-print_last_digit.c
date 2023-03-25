#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int pld)
{
int nld;
nld = pld % 10;
if (pld < 0)
nld *= -1;
_putchar(48 + nld);
return (nld);
}
