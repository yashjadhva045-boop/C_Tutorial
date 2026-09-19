#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    char  c;
    printf("Enter the value of c :");
    scanf(" %c",&c);
    int b;
    printf("Enter the value of b :");
    scanf(" %d",&b);
     
    switch (c)
    {
    case '+':
        printf("%d addtion",a+b);
        break;
    case '-':
        printf("%d substraction",a-b);
        break;
    case '*':
        printf("%d Multiplication",a*b);
        break;
    case '/':
        printf("%d Division",a/b);
        break;            
    
    default: 
    printf("The undefind value");
        break;
    }

    return 0;
}