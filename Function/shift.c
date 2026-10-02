#include<stdio.h>
 int shift(int num){
    int count = 2;
    while (num)
    {
       count++;
       num >>=2;
    }
     return count;
     
 }
int main()
{
   int num=435;
  int result =  shift(434);
  printf("%d",result);


}