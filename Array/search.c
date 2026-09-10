#include<stdio.h>
int main()
{   int arr[5]={1,2,3,4,5};
   int x = 3;
   for(int i=0;i<=4;i++){
    if(arr[i]== x)
    {
        printf("%d is present in the array and index is %d",x,i);
        break;
    }
   }
    return 0;

}