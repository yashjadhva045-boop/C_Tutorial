#include<stdio.h>
int main()
{ int arr[7]={1,2,3,4,5,6,7};
   int a[7];
   for(int i =0;i<=6;i++){
    a[i]=arr[6-i];
   }for(int i =0;i<=6;i++){
    printf("%d ",a[i]);
   }
      
    
    
    
    
    
    
    return 0;
}