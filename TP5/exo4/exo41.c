#include<stdio.h>
int pgcd_euc(int a,int b)
{
  if (a%b==0)
    {
      return b;
    }
  else
    return pgcd_euc(b,a%b);
}

int main()
{
  int a,b;
  printf("veuillez entrer deux entiers : ");
  scanf("%d%d",&a,&b);
  printf("le pgcd de %d et %d est : %d\n",a,b,pgcd_euc(a,b));
  return 0;
}
