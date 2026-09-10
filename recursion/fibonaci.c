#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;//n<=2;
    int sum1= fibo(n-1);
    int sum2 = fibo(n-2);
    int sum = sum1 + sum2;
    return sum;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",x);
    return 0;
}