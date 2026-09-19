#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the rows :");
    scanf("%d",&r);
    int c;
    printf("Enter the columns :");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter all elements of the array :");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);   // <-- this was missing
        }
    }

    int maxcount = 0;
    int maxindex = -1;
    for(int i = 0; i < r; i++){
        int count = 0;
        for(int j = 0; j < c; j++){
            if(arr[i][j] == 1) count++;
        }
        if(maxcount < count){
            maxcount = count;
            maxindex = i;
        }
    }

    printf("Row with most 1s: index %d, count %d\n", maxindex, maxcount);

    return 0;
}