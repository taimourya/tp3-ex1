#include <iostream>
#include <stdlib.h>
#include "liste.h"

int choix_menu()
{
    int choix;
    system("cls");
    std::cout << "***************" << std::endl;
    std::cout << "1 : saisi." << std::endl;
    std::cout << "2 : afficher." << std::endl;
    std::cout << "3 : exit." << std::endl;
    std::cout << "***************" <<  std::endl;
    std::cin >> choix;
    return choix;
}

void menu()
{
    int choix = 0;
    Liste emp;
    char nom[10];

    init_Liste(&emp);
    while(choix != 3)
    {
        choix = choix_menu();
        switch(choix)
        {
            case 1:
                ajouterEmployer(&emp);
                break;
            case 2:
                std::cout << "nom a rechercher : ";
                std::cin >> nom;
                rechercher_liste(emp, nom);
                break;
        }
        if(choix!=3)
            system("PAUSE");
    }
}
