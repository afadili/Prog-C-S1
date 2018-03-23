#include<stdio.h>

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste)
{
  *quotient = dividende/diviseur;
  *reste= dividende % diviseur;
}

int main(){
    int dividende, diviseur, quotien, reste;
    printf("veuillez entrer le dividende :");
    scanf("%d\n",&dividende);
    printf("veuillez entrer le diviseur :");
    scanf("%d\n",&diviseur);
    quotientEtReste(dividende, diviseur);
}


