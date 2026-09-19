#include<stdio.h>
#include<string.h>
int main()
{
     struct book
     {
        char name[20];
        int noofpages;
        float price;
     }a,b,c;
     
     strcpy(a.name,"Sham chi Aai");
     a.noofpages = 122;
     a.price = 113.43;

     strcpy(b.name,"Raje Shivaji");
     b.noofpages = 150;
     b.price = 150.35;                                  


     printf("%s",a.name);
     
    return 0;

}