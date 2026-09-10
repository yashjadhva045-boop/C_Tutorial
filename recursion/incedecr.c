#include<stdio.h>
void decresion (int n){
    if(n==0) return;
    printf("%d\n",n);
    decresion(n-1);
      printf("%d\n",n);
    return;
}

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
     decresion(n);
    
    return 0;
}