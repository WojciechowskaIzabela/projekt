#ifndef LEW_H
#define LEW_H
#include "zwierze.h"


class CLew : public CZwierze{

public:
    CLew (char = '.', int=0, int=5);
    ~CLew();
    int czy_kres_zycia(CZwierze *zw);
    char sprawdz_plec(CZwierze *zwierze);
};

#endif // LEW_H
