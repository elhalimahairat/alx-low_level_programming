#ifndef main
#define main
int _isupper(int c);
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else
return (0);
}
void _putchar(void);
void _putchar(void){
   char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return;
}
#endif
