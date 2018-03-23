#include<stdio.h>
int n;
int main(){
  printf("veuillez entrer un entier :\n");
  scanf("%d",&n);
  affiche_entiers(n);
  ajoute_3(n);
  return 0;
}

//fonction affiche_entiers

int affiche_entiers(int n){
  int i=1;
  for(i=1;i<=n;i++){
  printf("%d\n",i);
  }
}
// fonction ajoute_3
int ajoute_3(int n){
  printf("n+3 = %d\n",n+3);
}
