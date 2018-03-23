#include<stdio.h>
#include<stdlib.h>

typedef struct cellule
{
  int valeur;
  struct cellule *suivante, *precedent;
}Cellule, *ListeD;

/* fonction insereTete */
int insereTete(ListeD *cell, int n)
{
  Cellule *tmp=malloc(sizeof(Cellule));
  if (tmp==NULL)
    return 0;
  tmp->valeur=n;
  tmp->suivante=*cell;
 
