#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
int i, n;
n = 0;
while (str[n] != '\0')
n++;
for (i = 0; i < n; i += 2)
printf("%c", str[i]);
printf("\n");
return;
}
