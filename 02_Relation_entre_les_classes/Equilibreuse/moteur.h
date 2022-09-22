#ifndef MOTEUR_H
#define MOTEUR_H

class MccUldaq;

class Moteur
{
private:
    int consigneVitesse;
    MccUldaq & laCarte;

public:
    Moteur(const MccUldaq & _laCarte);
    void Demarrer();
    void Arreter();
    void FixerConsigne(const int _laConsigne);
};

#endif // MOTEUR_H
