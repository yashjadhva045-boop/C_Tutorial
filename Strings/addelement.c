#include<stdio.h>
#include<string.h>
int main ()
{
    char str[20]= "yash";
    printf("%s\n",str);
    for(int i = 4;i>=1;i--){
        str[i+1]=str[i];
    }
    str[1]='a';
    printf("%s",str);
    return 0;
}