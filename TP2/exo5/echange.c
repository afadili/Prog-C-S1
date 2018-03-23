#include<stdio.h>
int main(){
  int a,b,c;
  printf("entrer deux valeurs : \n");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("les deux valeurs sont : %d %d\n",a,b);
  return 0;
}
