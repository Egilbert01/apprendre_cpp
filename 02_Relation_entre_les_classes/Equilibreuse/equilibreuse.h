#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H
#include "mcculdaq.h"

class Equilibreuse
{
private:
    MccUldaq laCarte;
    Moteur *leMoteur;
public:
    Equilibreuse();
};
#endif // EQUILIBREUSE_H
