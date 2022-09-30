#include "CompteBancaire.h"

/**
@file CompteBancaire.cpp
@brief Déclaration de la classe CompteBancaire
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/


 void CompteBancaire::ConsulterSolde()
{
     std::cout << "votre solde actuelle est de : "<< solde << "€" << std::endl;
}

  void CompteBancaire::Deposer(const float _montant){
     float montant = _montant;
     solde += montant;
 }


 void CompteBancaire::Retirer(const float _montant){

     float montant = _montant;
     if(solde > montant){
         solde -= montant;
     }

  }

 CompteBancaire::~CompteBancaire()
 {
     std::cout << "Destructeur CompteBancaire" <<std::endl;
 }

 CompteBancaire::CompteBancaire(const float _montant_initial):
     solde(_montant_initial)
 {

 }

 CompteBancaire::CompteBancaire():
 solde(300)
 {

 }
