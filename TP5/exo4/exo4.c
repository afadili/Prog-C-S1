#include<stdio.h>
int fact(int n)
{
  if (n==0)
    {
      return 1;
    }
  else
    return n*fact(n-1);
}

int main()
{
  int n;
  printf("veuillez entrer un entier : ");
  scanf("%d",&n);
  printf("factoriel de %d est %d\n",n,fact(n));
  return 0;
}
