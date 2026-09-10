#include<stdio.h>
int add(int x ,int y){
return x+y;
}
int main ()
{
    int a;
    printf("Enter the frist number :  ");
    scanf("%d", &a);
        int b;
    printf("Enter the secand  number : ");
    scanf("%d", &b);
    int sum = add(a,b);
    printf(" The sum of two number is : %d",sum);
    return 0;
}