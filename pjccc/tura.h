#ifndef TURA_H
#define TURA_H

#include "zwierze.h"
#include "krokodyl.h"
#include "lew.h"
#include "gazela.h"



class CZwierze;

class CTura{


    CZwierze ***tablica;
    int rozmiar;
    void powitanie();
public:

     int tura_obecna;
    CTura();
    ~CTura();

    void drukuj_tablice();
    void przeprowadz_ture();
    void zwierzeta_startowe();
    void wczytaj_rozmiar_planszy();
    void dodaj_zwierze();
    void narodziny(char z);
    void postarz();
};

#endif // TURA_H
