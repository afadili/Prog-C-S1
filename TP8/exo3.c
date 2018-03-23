
#include <stdio.h>
#include <math.h>

#define MAXNOTES 4

typedef struct Date {
    int jour;
    char mois[10];
    int annee;
} Date;

void ecrireDate (Date date){
    printf("%d %s %d\n", date.jour, date.mois, date.annee);
}

void lireDate (Date *date){
    printf("jour : ");
    scanf("%d", &((*date).jour));
    printf("mois : ");
    scanf("%s", ((*date).mois));
    printf("annee : ");
    scanf("%d", &((*date).annee));
    printf("\n");
}


typedef struct Fiche {
    char nom[20];
    char prenom[20];
    Date dateNaissance;
    int notes[MAXNOTES];
    int nbNotes;

} Fiche;

void lireFiche(Fiche *fiche) {
    printf("nom : ");
    scanf("%s", ((*fiche).nom));
    printf("prenom : ");
    scanf("%s", ((*fiche).prenom));
    printf("dateNaissance : \n");
    lireDate(&(*fiche).dateNaissance);
    (*fiche).nbNotes = 0;
}

void ajouteNote(Fiche *fiche) {
    if ((*fiche).nbNotes < MAXNOTES) {
        printf("Ajouter une note à %s %s :",(*fiche).nom, (*fiche).prenom);
        scanf("%d", &(*fiche).notes[(*fiche).nbNotes]);
        (*fiche).nbNotes++;
    }
}

void ecrireFiche(Fiche fiche) {
    int i = 0;
    printf("nom : ");
    printf("%s\n", fiche.nom);
    printf("prenom : ");
    printf("%s\n", fiche.prenom);
    printf("dateNaissance : \n");
    ecrireDate(fiche.dateNaissance);
    printf("nb notes : ");
    printf("%d\n", fiche.nbNotes);
    for (i=0; i<(fiche.nbNotes); i++) {
        printf("notes #%d : %d\n",i,fiche.notes[i]);
    }
}

float moyenne (Fiche fiche) {
    float m = 0;
    int i =0;
    for (i=0; i<(fiche.nbNotes); i++) {
        m += fiche.notes[i];
    }
    m /= fiche.nbNotes;
    return m;
}

int main() {
    Date date;
    
    lireDate(&date);
    ecrireDate(date);

    Fiche fiche;
    lireFiche(&fiche);
    ajouteNote(&fiche);
    ajouteNote(&fiche);
    ecrireFiche(fiche);

    printf("moyenne : %f\n", moyenne(fiche));

    return 0;
}
    
