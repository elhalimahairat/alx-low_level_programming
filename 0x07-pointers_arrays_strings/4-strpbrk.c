#include "main.h"

char *_strpbrk(char *s, char *accept)
{
int i ,j;
m = 0;
for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
s++;
}
}
return (NULL);
}
