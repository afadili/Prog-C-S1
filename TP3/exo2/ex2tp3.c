#include<stdio.h>

int main(){
  int a,s,i;
  float m;
  a=0;
  s=0;
  i=0;
  while(a>=0){
    printf("entrer un nombre entier");
    scanf("%d",&a);
    if (a>0){
      s=s+a;
      i=i+1;
    }
  }
  m=(float)s/i;
  printf("somme = %d, moyenne= %f\n",s,m);
  return 0;
}

      
      
    
