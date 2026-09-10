#include<stdio.h>

int main()
{
    int number, count=0, result=0, mul=1, cnt, rem;

    printf("Enter the number :");
    scanf("%d",&number);

    int q = number;

    // Count digits
    while(q != 0)
    {
        q = q / 10;
        count++;
    }

    cnt = count;
    q = number;

    // Calculate Armstrong number
    while(q != 0)
    {
        rem = q % 10;

        mul = 1;       // Reset multiplication for each digit
        cnt = count;   // Reset count for each digit

        while(cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }

        result = result + mul;
        q = q / 10;
    }

    if(result == number)
    {
        printf("%d is an Armstrong number", number);
    }
    else
    {
        printf("%d is not an Armstrong number", number);
    }

    return 0;
}