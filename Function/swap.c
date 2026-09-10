#include<stdio.h>
void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b :");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d",b);
    return 0;
}