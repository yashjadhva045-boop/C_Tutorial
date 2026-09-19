#include<stdio.h>
#include<string.h>
int main ()
{   typedef struct pokemon{
  
   char name[50]; 
  int hp;
  int speed;
  char tair;
  int attack;


} pokemon;

pokemon arr[3];
strcpy(arr[0].name,"Charizard");
arr[0].hp = 50;
arr[0].attack = 123;
arr[0].speed = 150;
arr[0].tair = 's';

strcpy(arr[1].name,"pikachu");
arr[1].hp = 47;
arr[1].attack = 134;
arr[1].speed = 157;
arr[1].tair = 'a';

strcpy(arr[2].name," Mewtwo");
arr[2].hp = 234;
arr[2].attack = 342;
arr[2].speed = 422;
arr[2].tair = 'r';
  
for( int i = 0; i<3; i++)
{
    printf(" Name :%s\n", arr[i].name);
    printf(" hp  :%d\n", arr[i].hp);
    printf(" attack :%d\n", arr[i].attack);
    printf(" speed :%d\n", arr[i].speed);
    printf(" tair :%c\n", arr[i].tair);
}






    return 0;
}