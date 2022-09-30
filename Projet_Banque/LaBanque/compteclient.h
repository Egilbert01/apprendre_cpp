#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

/**
@file compteclient.h
@brief Déclaration de la classe compteclient
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/

using namespace std;

class CompteClient
{
private:
    string nom;
    int numero;

public:
    CompteClient(const float in_solde);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteEpargne();
    void GererCompteBancaire();


};

#endif // COMPTECLIENT_H
