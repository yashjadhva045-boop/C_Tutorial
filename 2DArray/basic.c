#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the rows :");
    scanf("%d",&r);
    int c;
    printf("Enter the colum :");
    scanf("%d",&c);
    int n [r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            //printf("Enter the valuse of  i And j  : %d %d \n",i,j);
            scanf("%d",&n[i][j]);
        }
        }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }

return 0;
}