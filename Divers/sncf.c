#include<stdio.h>
int main(){
int age;
printf("Bonjour\n");
printf("Veuillez indiquer vôtre âge : \n");
scanf("%d",&age);
if (age>26)
printf("vous n'avez pas droit à une réduction \n");
else 
printf("vous avez droit à une réduction \n");
return 0;
}
