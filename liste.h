#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

#include "Employer.h"

typedef struct
{
    Employer emps[100];
    int nb;
}Liste;

void init_Liste(Liste *l);
void  afficher_liste(Liste l);
void ajouterEmployer(Liste* l);
void rechercher_liste(Liste l, char *nom);



#endif
