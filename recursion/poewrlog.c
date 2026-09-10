#include<stdio.h>
int power (int a, int b){
    if(b==0) return 1;
   //if(b==1) return a;
    if(b%2==0)return power(a,b/2)*power(a,b/2);
    if(b%2!=0) return power(a,b/2)* power(a,b/2)*a;
}
int main ()
{
    int a;
    printf("Enter the base :");
    scanf("%d",&a);
    int b;
    printf("Enter the power  :");
    scanf("%d",&b);
    int x =power(a,b);
    printf("%d raised to the power %d is : %d", a,b,x);
    return 0;
}