#include<stdio.h>
int main(){
  int n=1;
  int *p;
  p=&n;
  printf("n=%d\n",n);
  printf("%p\n",&n);
  printf("%p\n",p);
  *p=2;
  printf("n=%d\n",n);
}
