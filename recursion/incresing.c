#include<stdio.h>
void incr ( int x ,int n){
    if(x>n) return;
    printf("%d\n",x);
    incr(x+1,n);
    return;
}

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
     incr( 1,n);
    
    return 0;
}