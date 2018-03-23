#include<stdio.h>

int factoriel(int a){
  if (a==0) return 1;
  if (a==1) return 1;
  return a*factoriel(a-1);
}
int main(){
  int a;
  printf("entrer un nombre : ");
  scanf("%d",&a);
  factoriel(a);
  printf("voici la factorielle de %d : %d\n",a,factoriel(a));
}
