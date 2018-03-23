#include<stdio.h>
#include<stdlib.h>

typedef struct cellule cellule;

struct cellule
{
	int valeur;
	struct cellule *suivante;
};

typedef cellule* Liste;


Liste insereTete(Liste lst, int n)
{
	/*printf("Inserer un entier : \n");
	scanf("%d",&n);*/
	cellule *nv = (cellule *) malloc(sizeof(cellule));
	if (nv == NULL)
		printf("Erreur d'allocation \n");
	nv->valeur=n;
	nv->suivante=lst;
	return nv;
}

Liste trierListe (Liste lst)
{
	int tmp;
	Liste pt1;
	Liste pt2;
	for (pt1 = lst ; pt1 != NULL ; pt1 = pt1->suivante)
		for (pt2 = pt1 ; pt2 != NULL ; pt2 = pt2->suivante)
		{
			if ((pt1->valeur) > (pt2->valeur))
			{
				tmp = pt1->valeur;
				pt1->valeur = pt2->valeur;
				pt2->valeur = tmp;
			}
		}
		return lst;
}

Liste precedent(Liste lst, Liste mp)
{
	if ((lst == mp ) || (lst->suivante == mp))
	{
		return lst;
	}
	else 
	{
		return precedent(lst->suivante,mp);
	}
}

Liste PluspetitElement(Liste lst)
{
	Liste min = lst;
	Liste pt = lst;
	while (pt != NULL)
	{
		if(pt->valeur < min->valeur)
		{
			min = pt;
		}
	    pt = pt->suivante;
	}
return min;
}

Liste trierchaine(Liste lst)
{
	Liste R;
	Liste B;
	Liste PR;
	Liste PB;
	int premier = 1;
	R = lst;
	while (R != NULL)
	{
		B = PluspetitElement(R);
		PR = precedent(lst, R);
		PB = precedent(lst, B);
		if ( R != B)
		{
			PB->suivante = B->suivante;
			if ( PR != R)
			{
				PR->suivante = B;
			}
			else 
			{
				if (premier == 1)
				{
					lst = B;
					premier = 0;
				}
			}
		    B->suivante = R;
		    R = B;
		}
	    R = R->suivante;
	}
return lst;
}


void afficheListe(Liste lst)
{
	printf("Les valeurs de la liste sont : \n");
	while (lst != NULL)
	{
		printf("%d\n",lst->valeur );
		lst=lst->suivante;

	}
	
}

int longueurListe(Liste lst)
{
	int cpt=0;
	while(lst != NULL)
	{
		cpt++;
		lst=lst->suivante;
	}
	return cpt;
}

int main ()
{
	cellule *cel1 = NULL;
	cel1 = insereTete(cel1,1);
	cel1 = insereTete(cel1,2);
	cel1 = insereTete(cel1,3);
	cel1 = insereTete(cel1,4);

	/*printf("La valeur de la tete est : %d \n",cel1->valeur );*/

	afficheListe(cel1);
	printf("La longueur de la Liste est : %d\n",longueurListe(cel1) );
	printf("---------------- Le tri de la liste -------------\n");
	afficheListe(trierListe(cel1));
	afficheListe(cel1);
	printf("----------------- Le tri avec chainage ---------------\n");
	afficheListe(trierchaine(cel1));
}