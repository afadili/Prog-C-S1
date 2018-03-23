#include<stdio.h>
#define MAXNOTES 4

typedef struct Date
{
  int jour;
  char mois[10];
  int annee;
} Date;
  
typedef struct Fiche
{
  char nom[20];
  char prenom[20];
  Date dateDeNaissance ;
  float notes[MAXNOTES];
  int nbNotes;
} Fiche ;


/*fonction ecrireDate */
void ecrireDate(Date date)
{
  printf("%d %s %d\n",date.jour,date.mois,date.annee);
  }

/*fonction lireDate */
void lireDate(Date *date)
{
  scanf("%d",&(date->jour));
  scanf("%s",date->mois);
  scanf("%d",&(date->annee));
}

/* fonction LireFiche */
void lireFiche(Fiche *fiche)
{
  scanf("%s",fiche->nom);
  scanf("%s",fiche->prenom);
  lireDate(&(fiche->dateDeNaissance));
  fiche->nbNotes=0;
}
/* fonction ajoutNote */
void ajoutNote(int i, Fiche *fiche)
{
  printf("veuillez saisir une note :");
  scanf("%f",&(*fiche).notes[i]);
  printf("------suite--------\n");
}

/* fonction ecrireFiche*/
void ecrireFiche(Fiche *fiche)
{
  int i;
  printf("Nom : %s\n",fiche->nom);
  printf("Prenom : %s\n",fiche->prenom);
  printf("Date de naissance : ");
  ecrireDate(fiche->dateDeNaissance);
  printf("nombre de notes : %d\n",(fiche->nbNotes));
  if (fiche->nbNotes>0)
    {
      for (i=0;i<(fiche->nbNotes);i++)
	{
	  printf("Notes : %.2f\n",fiche->notes[i]);
	}
    }
  else
    {
      printf("Notes : aucune note \n");
    }
}
/* fonction moyenne */
int moyenne(Fiche *fiche )
{
  if (fiche->nbNotes>0)
    {
      int moy;
      int som=0;
      int i;
      for (i=0;i<fiche->nbNotes;i++)
	{
	  som=som+fiche->notes[i];
	}
      moy = som/(fiche->nbNotes);
      return moy;
    }
  else
    {
      return -1;
    }   
}

void saisirnotes(Fiche *fiche)
{
  printf("veuillez sasir le nombre de notes :");                                         
  scanf("%d",&fiche->nbNotes);
  printf(" >>>>>>> ------------- %d  notes ?\n",fiche->nbNotes);
    if (fiche->nbNotes >0 && fiche->nbNotes <= MAXNOTES)
      {	
	int i;
	for (i=0;i<(fiche->nbNotes);i++)
	  {
	    ajoutNote(i,fiche);
	  }
      }
}
  
int main ()
  {
    
    Date naissance;
    Fiche fiche1;
    float moy;
    printf("veuillez entrer une date : \n");
    lireDate(&naissance);
    printf("Voici la date que vous avez saisi :\n");
    ecrireDate(naissance);
    printf("veuillez entrer votre nom, prenom, date de naissance :\n");
    lireFiche(&fiche1);
    printf("---------------------------------saisie de notes------------------------------\n");
    saisirnotes(&fiche1);
    //printf("veuillez entrer vos notes :\n");
    printf("Voici votre fiche :\n");
    printf("------ debut ----------------\n");
    ecrireFiche(&fiche1);
    printf("------ fin ----------------\n");
    moy = moyenne(&fiche1);
    if (moy != -1)
      printf("la moyenne est : %.2f\n",moy);
    else
      printf("Aucune Moyenne\n");
    return 0;     
  }
