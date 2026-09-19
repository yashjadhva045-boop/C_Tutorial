#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number(1-7) :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("THURSDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATUARDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    
    default: printf("THE NUMBER IS INVALIDE");
        break;
    }
    return 0;
}