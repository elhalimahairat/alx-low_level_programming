#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
char *f;
int i ,a;
a = 0;
for (i = 0; s[i] != '\0'; i++)
{
if ( s[i] != c)
	break;
}
if (s[i] != '\0')
    {
    for (; s[i] != '\0'; i++)
       {
          s[a] = s[i];
          a++;
       }
    }
return (f);
}

