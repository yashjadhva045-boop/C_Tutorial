#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the rows :");
    scanf("%d",&r);
    int c;
    printf("Enter the colum :");
    scanf("%d",&c);
    printf("Enter the all element of arrar :");
    int arr [r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            //printf("Enter the valuse of  i And j  : %d %d \n",i,j);
            scanf("%d",&arr[i][j]);
        }
        }
        printf("\n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            sum = sum + arr[i][j];
        }
      
     }
       printf(" The sum of the matrix is :%d",sum);

return 0;
}