#include<stdio.h>
int main(){
  int a;
  printf("veuiller entrer un entier:\n");
  scanf("%d",&a);
  if (a>0){
    printf("positif\n");
  }
  else
    printf("negatif\n");
  return 0;
}
