#include<stdio.h>
#ifndef main
#define main
void print__putchar();
void print_alphabet(void);
void print_alphabet_x10(void);

void print__putchar(){
printf("_putchar\n");
return;
}

void print_alphabet(void){
printf("abcdefghijklmnopqrstuvwxyz\n");
return;
}
void print_alphabet_x10(void){
int i = 0;
while(i<10)
{
printf("abcdefghijklmnopqrstuvwxyz\n");
i++;
}
return;
}
#endif
