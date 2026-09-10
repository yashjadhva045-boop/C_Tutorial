#include<stdio.h>
int maze(int cr, int cc, int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)
    rightways += maze(cr,cc+1,er,ec);
    if(cc==ec)
    downways += maze(cr+1,cc,er,ec);
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze( cr+1,cc,er,ec);
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
    int x =maze(1,1,n,m);
    printf("%d",x);
    return 0;
}