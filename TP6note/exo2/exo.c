#include<stdio.h>

int est_premier(int n)
{
  int i;
  if (n>=2){
  for (i=2; i<n; i++)
    {
      if (n%i==0) {
	return 0;  }
    }

  
      return 1;
  }
  else 
    return 0;
}

int main()
{
  int n;
  printf("veuillez entrer un entier : ");
  scanf("%d",&n);
  printf("%d\n", est_premier(n));
  return 0;
}
  
