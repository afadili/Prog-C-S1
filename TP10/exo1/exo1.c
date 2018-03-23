riçi#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct Cellule{
  int valeur;
  struct cellule *suivante;
}Cellule, *Liste; /* on définit un pointeur sur cellule qui s'appelle Liste */

/* Liste est un pointeur sur une cellule */
/* 1- on alloue de la mémoire pour créer la nouvelle première cellule avec n comme valeur 
   2- on fait pointer la nouvelle cellule crée vers la première cellule pour former la nouvelle liste chainée 
   3- on fait pointer *lst sur la nouvelle première cellule */

/* fonction insereTete */

int insereTete(Liste *lst, int n)
{
  /* 1 */
  Cellule *tmp= malloc(sizeof(Cellule));
  if (tmp==NULL)
    return 0;
  tmp->valeur=n;
  /* 2 */
  tmp->suivante=*lst;
  /* 3 */
  *lst=tmp;
  return 1;
}

/* fonction afficheListe */

void afficheListe(Liste lst)
{
  while (lst!=NULL)
    {
      printf("%d\n",lst->valeur);
      lst=lst->suivante;
    }
}

/* fonction LongueurListe */
int longueurListe(Liste lst)
{
  int cpt=0;
    while (lst!=NULL)
      {
      lst=lst->suivante;
      cpt ++;
      }
    return cpt;
}

/* fonction nbInferieurs */
int nbInferieurs(Liste lst, int n1)
{
  int cpt=0;
  while (lst!=NULL)
    {
      if(lst->valeur<n1)
	{
	cpt++;
	}
      lst=lst->suivante;
    }
  return cpt;
}

/* fonction recherche(Liste lst, int n) */
Liste recherche(Liste lst, int n)
{
  while (lst!=NULL)
    {
      if(lst->valeur==n)
	return (lst);
      lst=lst->suivante;
    }
  return NULL;
}

/* fonction minimum */
Liste minimum(Liste lst)
{
  int valMin=INT_MAX;
  Liste res=NULL;
  while (lst!=NULL)
    {
      if(lst->valeur<valMin)
	{
	  valMin=lst->valeur;
	  res=lst;
	}
      lst=lst->suivante;
    }
  return res;
}

/* fonction estTriee */
int estTriee(Liste lst)
{
  int i;
  i= lst->valeur;
  lst=lst->suivante;
  while(lst!=NULL)
    {
      if (i>lst->valeur)
	{return 0;}
	  i=lst->valeur;
	  lst=lst->suivante;
    }
  return 1;
}

/* fonction concatene */
Liste concatene(Liste lst1, Liste lst2)
{
  Liste tmp;
  tmp = lst1;
  while (tmp->suivante!=NULL)
    {
      tmp = tmp->suivante;
    }
  tmp->suivante=lst2;
  return lst1;
}

int main ()
{
  Liste lst=NULL;
  Liste lst1=NULL;
  int i, tmp;
  int nb, n1;
  for (i=0;i<5;i++)
    {
      scanf("%d",&tmp);
      insereTete(&lst,tmp);
    }
  printf("la liste est : \n");
  afficheListe(lst);
  printf("la longueur de la liste est : %d\n",longueurListe(lst));
  printf("entrer un entier :");
  scanf("%d",&nb);
  printf("il y a %d nombres inférieurs à %d.\n",nbInferieurs(lst,nb),nb);
  printf("entrer l'entier que vous cherchez : \n");
  scanf("%d",&n1);
  printf("voila l'adresse de l'entier que vous cherchez :\n");
  afficheListe(recherche(lst,n1));
  printf("-------minimum----------\n");
  afficheListe(minimum(lst));
  if (estTriee(lst)==0)
    printf("la liste n'est pas triee\n");    
  else
   printf("la liste est trie en ordre croissant \n");
  printf("------------------liste 2------------\n");
    for (i=0;i<5;i++)
    {
      scanf("%d",&tmp);
      insereTete(&lst1,tmp);
    }
    printf("--------\n");
    afficheListe(lst1);
    printf("+\n");
    afficheListe(lst);
    afficheListe(concatene(lst,lst1));
}
  
  
