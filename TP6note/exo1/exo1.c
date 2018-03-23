#include<stdio.h>

int quotient_reste(int dividende, int diviseur, int *quotient, int *reste)
{
  if (diviseur==0)
    {
      return 0;
    }
  else
    *quotient=0;
  while (*quotient*diviseur<dividende)
    {
    *quotient=*quotient+1;
    }
    *reste=dividende-(diviseur * *quotient);
  return 1;
}

int main()
{
  int a,b,q,r;
  printf("veuillez entrer le dividende :");
  scanf("%d",&a);
  printf("veuillez entrer le diviseur : ");
  scanf("%d",&b);
  if (quotient_reste(a,b,&q,&r)==0)
    {
      return 0;
    }
  else
    quotient_reste(a,b,&q,&r);
    printf("le quotient est : %d\n",q);
    printf("le reste est : %d\n",r);
  return 0;
}
