#include <stdio.h>
int main(){
  int a,b,c,d,somme,moyenne;
  printf("entrer quatres nombres :\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  somme=a+b+c+d;
  moyenne=somme/4;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,somme,moyenne);
  return 0;
}
