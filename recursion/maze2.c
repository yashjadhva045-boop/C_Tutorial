#include<stdio.h>
int maze( int n,int m){
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1)
    rightways += maze(n,m-1);
    if(m==1)
    downways += maze(n-1,m);
    if(n>1&& m>1){
        rightways += maze(n,m-1);
        downways += maze( n-1,m);
    }
    int totalway = rightways+downways;
    return totalway;

}
    
   
int main ()
{
    int n;
    printf("Enter the  number of rows:");
    scanf("%d",&n);
    int m ;
    printf("Enter the number of coluns :");
    scanf("%d",&m);
    int x =maze(n,m);
    printf("%d",x);
    return 0;
}