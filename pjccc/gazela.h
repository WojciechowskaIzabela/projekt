#ifndef GAZELA_H
#define GAZELA_H
#include "zwierze.h"

class CGazela : public CZwierze{

public:
    CGazela (char = '.', int=0, int=7);
    ~CGazela();
    int czy_kres_zycia(CZwierze *zw);
    char sprawdz_plec(CZwierze *zwierze);
};


#endif // GAZELA_H
