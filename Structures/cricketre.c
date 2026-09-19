#include<stdio.h>
#include<string.h>
int main (){
     typedef struct cricketre
     { char fristmane [20];
        char lasttmane [20];
        int age ;
        int noofmatch;
        float average;
        
     } cricketre;

     cricketre arr[3];
      for(int i=0;i<3;i++){
        scanf("%s",arr[i].fristmane);
        scanf("%s",arr[i].lasttmane);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatch);
        scanf("%f",&arr[i].average);


      }
      for(int i =0;i<3;i++){
        printf(" Name : %s %s\n",arr[i].fristmane,arr[i].lasttmane);
        printf(" Age :%d\n",arr[i].age);
        printf(" Number of match played :%d\n",arr[i].noofmatch);
        printf(" Average :%f\n\n",arr[i].average);
      }

     
     return 0;
}