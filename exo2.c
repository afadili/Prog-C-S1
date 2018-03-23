#include<stdio.h>
#include<stdlib.h>
#define MAXNOTES 4


typedef struct Date
{
	int jour;
	char mois[10];
	int annee;
}Date;


typedef struct Fiche
{
	char nom[20];
	char prenom[20];
	Date dateDeNaissance;
	float notes[MAXNOTES];
	int nbNotes;
}Fiche;


typedef struct 
{
	Fiche *fiches;
	int taille;
	int capacite;
}Classe;


void lireDate(Date *date)
{
	printf("Entrez le jour : \n");
	scanf("%d",&date->jour);
	printf("Entrez le mois : \n");
	scanf("%s",date->mois);
	printf("Entrez l'annee :\n");
	scanf("%d",&date->annee);
}

void ecrireDate(Date date)
{
	printf("%d %s %d \n",date.jour, date.mois, date.annee );
}

void LireFiche (Fiche *fiche)
{
	printf("Entrez le nom :\n");
	scanf("%s",fiche->nom);
	printf("Entrez le prenom : \n");
	scanf("%s",fiche->prenom);
	lireDate(&(fiche->dateDeNaissance));
	fiche->nbNotes=0;
}

void ajoutNote(Fiche *fiche)
{
	int rep;
	do 
		{
			printf("Voulez vous ajouter une note ? Tapez 0 pour non et 1 pour oui :\n");
			scanf("%d",&rep);
			scanf("%f",&(fiche->notes[fiche->nbNotes]));
			(fiche->nbNotes)++;
		}
	while (rep==1 && (fiche->nbNotes)<MAXNOTES);
}

void ecrireFiche(Fiche fiche )
{
	printf("- Nom : %s\n", fiche.nom);
	printf("- Prenom : %s\n",fiche.prenom);
	printf("- Date de naissance : ");
	ecrireDate(fiche.dateDeNaissance);
	if (fiche.nbNotes==0)
	{
		printf("- Notes : aucune note.\n");
	}
	else 
		printf("- Notes : \n");
	{
		for (int i=0; i<MAXNOTES; i++)
		{
			printf("        %.2f\n",fiche.notes[i] );
		}
	
	}	
}

void moyenne(Fiche fiche )
{
	float moy, som;
	if (fiche.nbNotes==0)
	{
		printf("aucune note \n");
	}
	else 
	{
		for (int i=0; i<MAXNOTES; i++)
		{
			som=som+fiche.notes[i];
		}
		moy=som/(fiche.nbNotes);
		printf("Moyenne = %.2f\n",moy );
	}
}

void initialiseClasse(Classe *classe)
{
	Classe *tmp;
	printf("Entrez la taille de la classe : \n");
	scanf("%d",&(classe->taille));
	printf("Entrez la capacite maximale de la classe : \n");
	scanf("%d",&(classe->capacite));
	tmp=malloc(sizeof(Fiche)*(classe->capacite));
	if (tmp==NULL)
		printf("Erreur d'allocation \n");
	*tmp = *classe;
}

void dejaPresente (Classe classe, Fiche fiche )
{
	
}
int main ()
{
	/*Date date1;*/
	Fiche fiche1;
	/*lireDate(&date1);
	ecrireDate(date1);*/
	LireFiche(&fiche1);
	ecrireFiche(fiche1);
	ajoutNote(&fiche1);
	ecrireFiche(fiche1);
	moyenne(fiche1);
}