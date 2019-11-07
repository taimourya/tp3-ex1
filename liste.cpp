#include <iostream>
#include "liste.h"

void init_Liste(Liste *l)
{
    l->nb =0;
}

void afficher_liste(Liste l)
{
    int i;
    for(i=0; i<l.nb; ++i)
    {
        afficher_Employer(l.emps[i]);
    }
}

void ajouterEmployer(Liste *l)
{
    if(l->nb >=100)
    {
        std::cout << "taille depasser" << std::endl;
        return;
    }
    l->emps[l->nb++] = lire_employer();

}

void rechercher_liste(Liste l, char* nom)
{
    int i;
    for(i=0; i<l.nb; ++i)
    {
        if(cmp_employer(l.emps[i], nom))
            afficher_Employer(l.emps[i]);
    }
}










