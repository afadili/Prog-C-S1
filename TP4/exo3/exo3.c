#include<stdio.h>
int echange(int *a, int *b);
void incremente(int m);
void incrementeparadresse(int *p);
int main(){
  int n,m;
  n=5;
  m=1;
  incremente(n);
  incrementeparadresse(&n);
  echange(&n,&m);
  printf("n = %d et m=%d\n",n,m);
}


void incremente(int m){
  m++;
  printf("%d\n",m);
  printf("%p\n",&m);
}

void incrementeparadresse(int *p){
  *p++;
  printf("valeur incremente par adresse = %d",*p);
  printf("%p\n",p);
}

int echange(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
