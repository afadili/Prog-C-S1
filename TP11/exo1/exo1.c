#include<stdio.h>
#define N 4

/* fonction initialiseTab */
void initialiseTab(int tab[N][N])
{
  int i,j;
  int n;
  for (i=0;i<N;i++){
    for (j=0;j<N;j++){
      scanf("%d",&n);
      tab[i][j]=n;
    }                     /* on peut aussi scanner directement la valeur */
  }                       /* avec scanf("%d",&tab[i][j]);*/
}

// fonction afficheTab 
  
  void afficheTab(int tab[N][N])
  {
    int i,j;
    for (i=0;i<N;i++)
      {
      for (j=0;j<N;j++)
	{
	  printf("%d ",tab[i][j]);
	}
      printf("\n");
      }
  }

/* fonction remplitDiagonale */
void remplitDiagonale(int tab[N][N])
{
  int i;
  for (i=0;i<N;i++)
    {
     tab[i][i]=0;
    }
}

/* fonction remplitPartieSup */
void remplitPartieSup(int tab[N][N])
{
  int i,j;
  for (i=0;i<N;i++)
    {
      for (j=i+1;j<N;j++)
	{
	  tab[i][j]=1;
	}
    }
}

/* fonction sym */
void sym(int tab[N][N])
{
  int i,j;
  for (i=0;i<N;i++)
    {
      for (j=0;j<N;j++)
	{
	    tab[i][j]=tab[j][i];
	}
    }
}


  int main ()
  {
    int tab[N][N];
    initialiseTab(tab);
    afficheTab(tab);
    printf("------------------remplitDiagonale--------------\n");
    remplitDiagonale(tab);
    afficheTab(tab);
    printf("------------------remplitPartieSup--------------\n");
    remplitPartieSup(tab);
    afficheTab(tab);
    printf("------------------symetrique--------------\n");
    sym(tab);
    afficheTab(tab);
  }
