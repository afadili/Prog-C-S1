#include<stdio.h>
#define MAXTAILLE 5

void remplirtab(int tab[],int taille);
void affichetab(int tab[],int taille);
int sommetab(int tab[],int taille);
void incrementetab(int tab[],int taille);

int main(){
  int tab[MAXTAILLE];
  remplirtab(tab,MAXTAILLE);
  affichetab(tab,MAXTAILLE);
  sommetab(tab,MAXTAILLE);
  incrementetab(tab,MAXTAILLE);
  affichetab(tab,MAXTAILLE);
}
void remplirtab(int tab[],int taille){
  int i;
  for(i=0;i<taille;i++){
    printf("entrer une valeur du tableau: ");
    scanf("%d/n",&tab[i]);
  }
  }
  
void affichetab(int tab[],int taille){
  int i;
  for(i=0;i<taille;i++){
    printf("%d\n",tab[i]);
  }
}
int sommetab(int tab[],int taille){
  int s=0;
  int i;
  for(i=0;i<taille;i++){
    s=s+tab[i];
      }
  printf("somme = %d\n",s);
}
void incrementetab(int tab[],int taille){
  int i;
  for(i=0;i<taille;i++){
    tab[i]++;
  }
}
