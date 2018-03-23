#include<stdio.h>

void copie_chaine(char dest[], char src[]){
  int i=0;
  while (src[i]!='\0'){
    dest[i]=src[i];
    i++;
  }
  dest[i]='\0';
}
  
int longueur_chaine(char s[]){
  int i=0;
  while (s[i]!='\0'){
    i++;
  }
  return i;
}
  
int main (){
  int longueur_chaine(char s[]);
  char s[6]={'h','e','l','l','o','\0'};
  char cp[6];
  printf("%d\n", longueur_chaine(s));
  copie_chaine(cp,s);
  printf("%s\n",cp);
}
