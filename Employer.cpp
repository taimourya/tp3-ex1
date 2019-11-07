#include "Employer.h"
#include <iostream>
#include <string.h>

Employer lire_employer()
{
    Employer e;
    std::cout << "nom : ";
    std::cin >> e.nom;
    std::cout << "prenom : ";
    std::cin >> e.prenom;
    std::cout << "salaire : ";
    std::cin >> e.salaire;

    return e;
}
void afficher_Employer(Employer e)
{
    std::cout << "nom : " << e.nom << std::endl;
    std::cout << "prenom : " << e.salaire << std::endl;
    std::cout  << "salaire : " << e.salaire << std::endl;
}
bool cmp_employer(Employer e1, char *nom)
{
    if(strcmp(e1.nom, nom) ==0)
        return true;
    return false;
}


