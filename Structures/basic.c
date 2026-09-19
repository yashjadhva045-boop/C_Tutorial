#include<stdio.h>
int main ()
{ 
    struct car
    {
        int prices;
        int model;
        int speed;
        
    };
    struct car lamborghini;
    {
        lamborghini.model = 2021;
        lamborghini.prices = 21L;
        lamborghini.speed = 140;
    };
    struct car Audi;
    {
      Audi.model = 2024;
      Audi.prices = 20l;
      Audi.speed = 130;
    };
    printf("%d",lamborghini.model);
    
    
    
    return 0;
}