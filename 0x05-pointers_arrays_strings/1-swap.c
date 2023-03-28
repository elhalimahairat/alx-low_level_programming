#include "main.h"
/**
 *swap_int -a fonction swap two int 
 *
 *@a : pointer
 *
 *@b : pointer
 *
 *return : a and b 
 */
void swap_int(int *a, int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *c;
return;
}
