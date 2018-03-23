#include<stdio.h>
#define taille 5

void affiche_chaine(char chaine[]){
  int i=0;
  while (chaine[i] != '\0')
    {
      printf("%c\n",chaine[i]);
      i++;
    }
}
  
int main (){
  void affiche_chaine(char chaine[]);
  char tab[taille];
  char chaine[]={'H','E','L','L','O', '\0'};
  affiche_chaine(chaine);
  printf("%s\n", chaine);
  scanf("%s", tab);
  printf("%s\n", tab);
}
 
