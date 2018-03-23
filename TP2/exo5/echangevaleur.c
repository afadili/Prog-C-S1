#include<stdio.h>
int main(){
  int a,b,c;
  printf("entrer deux valeurs : \n");
  scanf("%d%d",&a,&b);
  if (a<b){
  c=a;
  a=b;
  b=c;
  }
  else
    b=b+10;
  printf("a= %d, b= %d\n",a,b);
  return 0;
}
