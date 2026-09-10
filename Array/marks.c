#include<stdio.h>
int main()
{ 
    int marks[10];
    for(int i = 0; i<=9; i++)
    {
    printf("Enter the marks %d ",i);
    scanf("%d", &marks[i]);
    }
    for(int i =0;i<=9;i++){
        if(marks[i]<35)
        printf("%d ",i);
    }
    return 0;

}