#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "CompteBancaire.h"

/**
@file CompteEpargne.h
@brief Déclaration de la classe CompteEpargne
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/

class CompteEpargne
{
private:
    float tauxPourcentage;
public:
    void CalculerInterets();
    CompteEpargne();
    CompteEpargne(const float _montant_initial);
    ~CompteEpargne();
};

#endif // COMPTEEPARGNE_H
