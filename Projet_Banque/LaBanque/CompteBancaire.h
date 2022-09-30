#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <iostream>

/**
@file CompteBancaire.h
@brief Déclaration de la classe CompteBancaire
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/

class CompteBancaire
{
private:
    float Solde();
public:
    CompteBancaire(const float _montant_initial);
    CompteBancaire();
    ~CompteBancaire();
    void Deposer (const float _montant);
    void Retirer (const float _montant);
    void ConsulterSolde();
protected:
    float solde;
};

#endif // COMPTEBANCAIRE_H
