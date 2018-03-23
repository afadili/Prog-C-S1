#include<stdio.h>
#include<stdlib.h>

int main()
{
  int **tab;
  int taille;
  int taillept;
  int **tmp;
  int *tmp1;
  printf("veuillez entrer la taille de tab :\n");
  scanf("%d",&taille);
  printf("veuillez entrer la taille des pointeurs :\n");
  scanf("%d",&taillept);
  **tmp=malloc(sizeof(int)*taille);
  if (*tmp==NULL)
    return 0;
  **tmp=**tab;
  *tmp1=malloc(sizeof(int)*taillept);
  if (tmp1==NULL)
    return 0;
  *tmp1=*tab;
  int i,j;
  for (i=0;i<taille;i++)
    {
    for (j=0;j<taillept;j++)
      {
	scanf("%d",tab[i][j]);
      }
    }
  free(**tab);
  free(*tab);
}
