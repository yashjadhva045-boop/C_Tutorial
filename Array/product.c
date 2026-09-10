#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    int pro= 1;
    for (int i = 0;i<n;i++)
    {   printf("Enter the number %d\n", i+1);
        scanf("%d", &arr[i]);

    }
    for(int i =0 ;i<n; i++)
    {
     
     pro = pro * arr[i];
        

    }
    printf(" the product of array is %d", pro);
    return 0;
}