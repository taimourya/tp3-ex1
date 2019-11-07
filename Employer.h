#ifndef EMPLOYER_H_INCLUDED
#define EMPLOYER_H_INCLUDED

#include <string>



typedef struct
{
    char nom[9];
    char prenom[9];
    int salaire;
}Employer;


Employer lire_employer();
void afficher_Employer(Employer e);
bool cmp_employer(Employer e1, char *nom);



#endif // EMPLOYER_H_INCLUDED
