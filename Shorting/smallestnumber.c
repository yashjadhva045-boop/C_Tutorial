#include<stdio.h>
int main()
{   
    int arr[5]={2,3,1,4,5};
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf(" UNsorted array : \n");
int k;
printf("k->");
scanf("%d",&k);
    for(int i=0;i<5;i++){
        int j=i;
        while (j>0 && arr[j]<arr[j-1])
        {
           int temp=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=temp;
           j--;
        }
        
    }
    printf("\n");
    printf("Sorthing array is : ");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
     printf("\n%dth the smallest element is : %d",k ,arr[k-1]);

    return 0;
}