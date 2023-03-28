#include "main.h"
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
if (l % 2 == 0)
{
for (i = l / 2; i < l; i++)
printf("%c", str[i]);
}
else
{
for (i = (l - 1) / 2; i < l - 1; i++)
printf("%c", str[i + 1]);
}
printf("\n");
return;
}
