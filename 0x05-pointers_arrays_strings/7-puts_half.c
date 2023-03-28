#include "mian.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
int i, n, l;
n = 0;
while (str[n] != '\0')
n++;
l = n;
for (i = l / 2; i < l; i++)
{
printf("%c", str[i]);
}
printf("\n");
return;
}
