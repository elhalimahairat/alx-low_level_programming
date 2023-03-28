#include "main.h"
/**
 *rev_string -a fonction print all of array in rev
 *
 *@s : array
 *
 *Return: all array
 */
void rev_string(char *s)
{
int i, n, j;
char m;
i = 0;
n = 0;
while (s[i] != '\0')
i++;
j = i;
i--;
while (n < j / 2)
{
m = s[n];
s[n] = s[i];
s[i] = m;
i--;
n++;
}
return;
}
