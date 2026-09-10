#include<stdio.h>
int main ()
{
    int a =5;
    int *x = &a;
    int **y= &x;
    *x=7; // a is change 
    printf("%p\n",x);
    printf("%p"&x);
    return 0;
}