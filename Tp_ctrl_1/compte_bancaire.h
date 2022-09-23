#ifndef COMPTE_BANCAIRE_H
#define COMPTE_BANCAIRE_H


class compte_bancaire
{
private:
    float Solde();
public:
    float comptebancaire(const float _solde);
    float Deposer (const float _montant);
    bool Retirer (const float _montant);
    float ConsulterSolde();

};

#endif // COMPTE_BANCAIRE_H
