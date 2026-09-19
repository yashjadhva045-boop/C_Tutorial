#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
       typedef struct pokemon{
  
   char name[50]; 
  int hp;
  int speed;
  char tair;
  int attack;
} pokemon;
  
typedef struct Legendarypokemon{
    Ability[10];
    pokemon normal;
}Legendarypokemon;
Legendarypokemon mewtwo;
strcpy(mewtwo.Ability,"Pressure");
mewtwo.normal.hp =150;
mewtwo.normal.attack = 180;
mewtwo.normal.speed=200;
    return 0;
}