#include<stdio.h>
#include<stdlib.h>

typedef struct cellule cellule;

struct cellule 
{
	int val;
	struct cellule *next;
};

typedef cellule *liste;

liste ajoutdebut(liste lst, int valeur)
{
	cellule *nv= malloc(sizeof(cellule));
	if (nv == NULL)
	{
		printf("Erreur d'allocation !\n");
		return lst;
	}
    nv->val = valeur;
    nv->next = lst;
    return nv;
}

liste ajoutFin(liste lst, int valeur)
{
	liste tmp = lst;
	cellule *nv=malloc(sizeof(cellule));
	if(nv == NULL)
	{
		printf("Erreur d'allocation\n");
		return lst;
	}
	nv->val = valeur;
	nv->next = NULL;
	if (lst == NULL)
	{
		return nv;
	}
	else 
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nv;
	}
	return lst;
}

void afficheListe(liste lst)
{
	printf("affichage liste \n");
	while (lst != NULL)
	{
		printf("%d\n",lst->val );
		lst = lst->next;
	}
	
}

int main ()
{
	liste lst1 = NULL ;
	lst1 = ajoutdebut(lst1,1);
	lst1 = ajoutdebut(lst1,2);
	lst1 = ajoutdebut(lst1,3);
	lst1 = ajoutdebut(lst1,4);
	lst1 = ajoutdebut(lst1,5);
	lst1 = ajoutdebut(lst1,6);
	lst1 = ajoutdebut(lst1,7);
	lst1 = ajoutdebut(lst1,8);
	lst1 = ajoutdebut(lst1,9);
	lst1 = ajoutdebut(lst1,10);
	lst1 = ajoutFin(lst1,1);
	lst1 = ajoutFin(lst1,2);
	lst1 = ajoutFin(lst1,3);
	lst1 = ajoutFin(lst1,4);
	lst1 = ajoutFin(lst1,5);
	lst1 = ajoutFin(lst1,6);
	lst1 = ajoutFin(lst1,7);
	lst1 = ajoutFin(lst1,8);
	lst1 = ajoutFin(lst1,9);
	lst1 = ajoutFin(lst1,10);
	afficheListe(lst1);
}