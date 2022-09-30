#include "compteepargne.h"

void CompteEpargne::CalculerInterets()
{
solde = solde + (taux Pourcentage * solde/100);
}

CompteEpargne::CompteEpargne(const float _montant_initial):
    CompteBancaire(_montant_initial),
    tauxPourcentage(2)
{
    std::cout<<"Constructeur CompteEpargne"<< std::endl;

}

CompteEpargne::CompteEpargne()
{

}

CompteEpargne::~CompteEpargne(){
    std::cout<<"Destruction CompteEpagne"<<std::endl;
}
