#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main ()
{
    typedef struct date{
        int day ;
        int Month ;
        int year ;

    }date;
    date a;
    a.day = 25;
    a.Month = 05;
    a.year = 2005;

    date b;
    b.day = 25;
    b.Month =05;
    b.year = 2005;

    bool flag = true;
    if(a.day!=b.day)flag = false;
     if(a.Month!=b.Month)flag = false;
      if(a.year!=b.year)flag = false;

      if(flag==true){
        printf("The Date is same");
      } else{
        printf("The Date is different");
      }

    return 0;
}