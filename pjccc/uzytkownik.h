#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include "tura.h"


class CUzytkownik{

public:
    CUzytkownik ();
    CTura t;
    int czy_przerwac_symulacje();
    void czy_dodac_zwierze();
};

#endif // UZYTKOWNIK_H
