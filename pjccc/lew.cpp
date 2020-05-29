#include "lew.h"
#include <iostream>

using namespace std;

CLew::CLew(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CLew::~CLew(){

    cout<<"Lew zakonczyl swoj zywot"<<endl;
}


int CLew::czy_kres_zycia(CZwierze *zw){

    // Lew bedzie zyc 5 tur
    if( (zw->wiek)==5)
        return 2;

    else
        return 0;
}

char CLew::sprawdz_plec(CZwierze *zwierze){
    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}
