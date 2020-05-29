#include "krokodyl.h"
#include <iostream>

using namespace std;


CKrokodyl::CKrokodyl(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CKrokodyl::~CKrokodyl(){

    cout<<"Krokodyl zakonczyl swoj zywot"<<endl;
}


int CKrokodyl::czy_kres_zycia(CZwierze *zw){

    // Krokodyl bedzie zyc 4 tury
    if((zw->wiek)==4) // tu ewentulanie dac wiek samo
        return 2;

    else
        return 0;
}

char CKrokodyl::sprawdz_plec(CZwierze *zwierze){

    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}
