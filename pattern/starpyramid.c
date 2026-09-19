#include<stdio.h>
int main()
{ int n;
    int a =0,b=1,c;
  printf("Enter the rows and colum :");
  scanf("%d",&n);
   for(int i =1;i<=n;i++){
    for(int k=i;k<=n-1;k++){
        printf(" ");
    }
    for(int j =1;j<=2*i-1;j++){
         printf("%d ",b);
        c=a+b;
        a=b;
        b=c;
       
    }
       printf("\n");      
   }  
 //revers
   for(int i=n-1;i>=1;i--){
    for(int k=i;k<=n-1;k++){
    printf(" ");}

    for(int j=1;j<=2*i-1;j++){
        printf("%d ",b);
        c=a+b;
        a=b;
        b=c;
        
    }

    printf("\n");
   }

    return 0;
}