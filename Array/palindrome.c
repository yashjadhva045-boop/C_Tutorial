#include<stdio.h>
void palindrome(int arr[], int n){
        int i=0;
        int j=n-1;
        while (i<j)
        {
          if(arr[i]!=arr[j]){
            printf("it is not palindrome");
            return;
          }
          i++;
          j--;
        }
        printf("it is palindrome");

        
     }
int main(){
    int n; 
    printf("Enter the size of array :");
    scanf("%d",&n);
     

    int arr[n];
    for (int i = 0 ;i<=n-1;i++)
    {
       printf("Enter the array %d\n",1+i);
       scanf("%d",&arr[i]);
    }

    palindrome(arr,n);
    

    
    return 0;
}