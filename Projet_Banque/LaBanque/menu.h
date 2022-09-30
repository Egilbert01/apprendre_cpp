#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/**
@file Menu.h
@brief Déclaration de la classe Menu
@version 1.0
@author Esteban Gilbert
@date 30/09/2022
*/

class Menu
{
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();

private:
    /// nom du fichier à ouvrir pour créer le menu
    string nom;
    /// La plus grande longueur d'un item
    int longueurMax;
    /// Nombre d'items du menu
    int nbOptions;
    /// Pointeur sur tableau des items
    string *options;
};

class Exception
{
public:
    Exception(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

#endif // MENU_H
