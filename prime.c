#include<stdio.h>
#include<math.h>
 int main ()
 {  int n;
    int i, val1 , val2, count =0;
    printf("Enter the number  :");
    scanf("%d",&n);

    val1=ceil(sqrt(n));
    val2=n;
    for(i=2;i<=val1;i++)
    {
          if(val2%i==0)
          count=1;
          
    }
    if(count ==0 && val2 !=1 ||  val2==2  ||  val2 == 3)
    {
        printf("%d the number is prime number ",val2);
    }
    else
    {
        printf("%d the number is not a prime number ", val2);

    }
    return 0 ;


 }