#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for (int j =0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    for(int i=0;i<3;i++){
        if(i%2==0){
        for (int j =0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
        //printf("\n");

        else{
            for(int j = 3-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }

        }
        printf("\n");
    }
    

    return 0;
}