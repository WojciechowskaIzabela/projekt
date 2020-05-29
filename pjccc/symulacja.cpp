#include <iostream>
#include "symulacja.h"

using namespace std;

CSymulacja :: CSymulacja (){
    cout<<"Zaczynajmy!"<<endl<<endl;
}


void CSymulacja::przeprowadz_symulacje(){

    przerwanie_symulacji=0;
     turka.tura_obecna=1;

    while(przerwanie_symulacji==0){


    turka.przeprowadz_ture();
    uz.czy_dodac_zwierze();
    stop_symulacji();



        cout<<"Przechodzimy do nastepnej tury"<<endl;

}

}
void CSymulacja :: stop_symulacji(){

   przerwanie_symulacji = uz.czy_przerwac_symulacje();

    if(przerwanie_symulacji==1){

       turka.~CTura();
       cout<<"Do zobaczenia!!!"<<endl;
    }

    }

