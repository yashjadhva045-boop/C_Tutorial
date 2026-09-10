#include<stdio.h>
int factorail(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main ()
{
    int n ;
    printf("Enter the valun of n :");
    scanf("%d",&n);
    int r;
    printf("Enter the valun of r :");
    scanf("%d",&r);
    int ncr = factorail(n)/(factorail(r)*factorail(n-r));
    printf("The cobination value is %d ",ncr);
    return 0;
}