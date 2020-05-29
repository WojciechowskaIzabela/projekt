#include <iostream>
#include "tura.h"
#include <ctime>
#include <cstdlib>

using namespace std;

CTura :: CTura ()
{
    powitanie();

    wczytaj_rozmiar_planszy();

    tablica=new CZwierze** [rozmiar];
    for(int i=0; i<rozmiar;i++)
        tablica[i]= new CZwierze *[rozmiar];

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++)
            tablica[i][j]=NULL;

}


CTura::~CTura(){



}


void CTura::przeprowadz_ture(){


     if(tura_obecna==1)
         zwierzeta_startowe();

     cout<<"Przeprowadzam ture "<<tura_obecna<<endl;



    drukuj_tablice();


    tura_obecna++;

}


void CTura::wczytaj_rozmiar_planszy(){

    cout<<endl<<" Podaj rozmiar tablicy z przedzialu <5,30>" <<endl;
    cin>>rozmiar;
    if(rozmiar<5 || rozmiar>30)
    {
        while(rozmiar<5 || rozmiar>30)
        {
            cout<<endl<<" Podaj wartosc z przedzialu <5,30> ! "<<endl;
            cin>>rozmiar;
        }
    }

}



void CTura::drukuj_tablice(){

    for(int i=0;i<rozmiar;i++){
        for(int j=0;j<rozmiar;j++){

            if (CKrokodyl* v = dynamic_cast<CKrokodyl*>(&(*tablica[i][j]))){
                               if(tablica[i][j]->sprawdz_plec(tablica[i][j])=='k')
                               cout << " Kk";

                               else
                                   cout<<" Km";
                           }

            if (CLew* v = dynamic_cast<CLew*>(&(*tablica[i][j]))){
                               if(tablica[i][j]->sprawdz_plec(tablica[i][j])=='k')
                               cout << " Lk ";

                               else
                                   cout<<" Lm ";
                           }
            if (CGazela* v = dynamic_cast<CGazela*>(&(*tablica[i][j]))){
                               if(tablica[i][j]->sprawdz_plec(tablica[i][j])=='k')
                               cout << " Gk ";

                               else
                                   cout<<" Gm";
                           }

            else
                cout<<" __ ";
         }
    cout<<endl;
    }
}

void CTura::zwierzeta_startowe(){

    srand (time(NULL));
int x,y;
x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y] != (NULL)){
    x= 0+rand()%(rozmiar);
    y= 0+rand()%(rozmiar);
}

tablica[x][y]=new CLew('k',tura_obecna);

x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y]!=(NULL)){
    x= 0+rand()%(rozmiar-1);
    y= 0+rand()%(rozmiar-1);
}

tablica[x][y]=new CLew('m',tura_obecna);

x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y]!=(NULL)){
    x= 0+rand()%(rozmiar);
    y= 0+rand()%(rozmiar);
}

tablica[x][y]=new CKrokodyl('k',tura_obecna);

x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y]!=(NULL)){
    x= 0+rand()%(rozmiar);
    y= 0+rand()%(rozmiar);
}

tablica[x][y]=new CKrokodyl('m',tura_obecna);

x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y]!=(NULL)){
    x= 0+rand()%(rozmiar);
    y= 0+rand()%(rozmiar);
}

tablica[x][y]=new CGazela('m',tura_obecna);

x= 0+rand()%(rozmiar);
y= 0+rand()%(rozmiar);

while (tablica[x][y]!=(NULL)){
    x= 0+rand()%(rozmiar);
    y= 0+rand()%(rozmiar);
}

tablica[x][y]=new CGazela ('k',tura_obecna);
}

void CTura :: powitanie(){

    cout<<endl<<endl<<endl;
      cout<<"****************  Witaj Użytkowniku na Wyspie!!!  ****************"<<endl<<endl;
      cout<<" Szybkie zasady : "<<endl<< " Na wyspie znajdują się rózne gatunki zwierząt, które mogą się PORUSZAĆ, ROZMNAŻAC oraz ATAKOWAC"<<endl<<" Wszystko obarczone jest prawdopodobienstwem spełnienia(poruszanie się zas to losowanie ruchu dol/0/gora,lewo/0/prawo) "<<endl;
       cout<<" Zwierzeta beda oznaczone na tablicy  postaci dwoch liter. "<<endl<<" Pierwsza litera bedzie od gatunku a druga od płci (K/M)"<<endl;
       cout<<"    Twoje umiejetnosci to: "<<endl<<"   1. Możliwość tworzenia zwierząt po skończeniu każdej tury"<<endl;
       cout<< "   2. Decydowanie kiedy skończyc symulacje"<<endl;
       cout<<"   3. Rozmiar kwadratowej wyspy"<<endl<<endl<<"Zacznijmy od tego ostatniego!"<<endl;

}


void CTura::dodaj_zwierze(){
    char plec_zw;
    char jakie_zwierze;
    int x,y;

    cout<<"Jakie zwierze chcesz stworzyc?"<<endl<<"K-Krokodyl"<<endl;
    cout<<"G-Gazela"<<endl<<"L-Lew"<<endl;
    cin>>jakie_zwierze;

    cout<<"Podaj plec zwierzecia"<<endl<<"K-Kobieta(samica)"<<endl<<"M-mezczyzna(samiec)"<<endl;
    cin>>plec_zw;


    cout<<" Podaj wspolczedne gdzie chcesz dodac zwierze"<<endl;
    cin>>x;
    cin>>y;

    if (tablica[x][y] != NULL)
        while ( tablica[x][y] != NULL){
            cout<<"Podaj  puste pole!";
            cin>>x;
            cin>>y;
        }

    if (jakie_zwierze=='g' || jakie_zwierze=='G' ){
            tablica[x][y] = new CGazela;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }


        if(jakie_zwierze=='k' || jakie_zwierze=='K' ){
            tablica[x][y] = new CKrokodyl;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }



        if(jakie_zwierze=='l' || jakie_zwierze=='L' ){
            tablica[x][y] = new CLew;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }

}

void CTura::narodziny(char z){

}

void CTura::postarz(){

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++){
            if (CLew* v = dynamic_cast<CLew*>(&(*tablica[i][j]))){
                tablica[i][j]->wiek=5;
                tablica[i][j]->~CZwierze();
                tablica[i][j]=NULL;
            }

            if (CGazela* v = dynamic_cast<CGazela*>(&(*tablica[i][j]))){
                tablica[i][j]->wiek=7;
                tablica[i][j]->~CZwierze();
                tablica[i][j]=NULL;
            }

            if (CKrokodyl* v = dynamic_cast<CKrokodyl*>(&(*tablica[i][j]))){
                tablica[i][j]->wiek=4;
                tablica[i][j]->~CZwierze();
                tablica[i][j]=NULL;
            }
            else
                tablica[i][j]->wiek++;
}
}
