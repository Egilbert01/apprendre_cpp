#include "menu.h"
#include <iostream>

using namespace std;


enum CHOIX_MENU
{
    Consulter_le_solde = 1,
    Effectuer_un_depot,
    Effectuer_un_retait,
    Retour,

};

int main()
{
    int choix;
    try {
        Menu leMenu("../MenuCPP/menu.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case Consulter_le_solde:
                cout << "Vous avez choisi de consulter votre solde" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case Effectuer_un_depot:
                cout << "Vous avez choisi d'effectuer un depot " << endl;
                Menu::AttendreAppuiTouche();
                break;
            case Effectuer_un_retait:
                cout << "Vous avez choisi d'effectuer un retrait" << endl;
                Menu::AttendreAppuiTouche();
                break;
            }

        } while(choix != Retour);
    } catch (std::runtime_error e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}
