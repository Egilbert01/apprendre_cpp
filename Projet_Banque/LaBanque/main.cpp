#include <iostream>
#include "menu.h"
#include "CompteBancaire.h"
#include "compteepargne.h"

/**
@file main.cpp
@brief Déclaration de la classe main
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/

using namespace std;

enum CHOIX_MENU
{
   CHOIX_1 = 1,
    CHOIX_2,
    CHOIX_3,
    CHOIX_4,
    QUITTER
};


int main()
{
    CompteBancaire Compte;
    CompteEpargne Epargne;
    int choix;
    float valdepot;
    float valRetrait;
    float ValInteret;
Menu menuCompteDepot{};
Menu menuCompteBancaire{};
Menu menuCompteEpargne{};

try{
    do
{
        choix= menuCompteBancaire.Afficher();
        switch (choix)
        {
        case CHOIX_1:
            Compte.ConsulterSolde();
            menuCompteDepot.AttendreAppuiTouche();
            break;
            case CHOIX_2:
            cout<<"entre la valeur que vous voulez deposer"

            case CHOIX_3:


        }


}
