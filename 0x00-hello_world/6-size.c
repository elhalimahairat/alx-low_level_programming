#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  /* main good */
int i ;
float l ;
char z ;
printf("Size of a char: %lu byte(s)\n", sizeof(z));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n",(usigned long)sizeof(i));
printf("Size of a long long int: %lu byte(s)\n", (usigned long long)sizeof(i));
printf("Size of a float: %lu byte(s)", sizeof(l));

return (0);
}
