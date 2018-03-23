#include<stdio.h>
int main(){
  float a;
  int b;
  printf("Veuillez entrer un nombre à virgule :");
  scanf("%f",&a);
  b=a;
  if (a>b+0.5){
    b=b+1;
  }
  printf("%d\n",b);
  return 0;
}
