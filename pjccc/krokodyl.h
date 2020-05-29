#ifndef KROKODYL_H
#define KROKODYL_H
#include "zwierze.h"

class CKrokodyl : public CZwierze{

public:
    CKrokodyl (char = '.', int=0, int=4);
    ~CKrokodyl();
    int czy_kres_zycia(CZwierze *zw);
    char sprawdz_plec(CZwierze *zwierze);
};

#endif // KROKODYL_H
