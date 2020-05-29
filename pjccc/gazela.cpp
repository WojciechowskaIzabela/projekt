#include "gazela.h"
#include <iostream>

using namespace std;

CGazela::CGazela(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CGazela::~CGazela(){

    cout<<"Gazela zakonczyla swoj zywot"<<endl;
}


int CGazela::czy_kres_zycia(CZwierze *zw){

    // Gazela bedzie zyc7 tur
    if((zw->wiek)==7)
        return 2;

    else
        return 0;
}

char CGazela::sprawdz_plec(CZwierze *zwierze){
    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}
