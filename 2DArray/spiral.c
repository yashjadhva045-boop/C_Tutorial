#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows :");
    scanf("%d",&r);
    printf("Enter number of columns :");
    scanf("%d",&c);
    int arr[r][c];

    for (int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
         
    int minr=0, maxr=r-1;
    int minc=0, maxc=c-1;
    int tne=r*c;
    int count=0;

    while(count<tne){
        // top row, left to right
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;

        // right column, top to bottom
        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;

        // bottom row, right to left
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;

        // left column, bottom to top
        for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }

    printf("\n");
    return 0;
}