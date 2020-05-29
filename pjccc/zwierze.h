#ifndef ZWIERZE_H
#define ZWIERZE_H


class CZwierze{

public:
    char plec;
      int wiek;
    virtual char sprawdz_plec(CZwierze *zwierze)=0;
    int sprawdz_wiek(CZwierze *zwierze);
    int tura_terazniejsza;
   virtual int czy_kres_zycia(CZwierze *zwierze)=0;
    virtual ~CZwierze()=0;
};

#endif // ZWIERZE_H
