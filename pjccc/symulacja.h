#ifndef SYMULACJA_H
#define SYMULACJA_H
#include "uzytkownik.h"

using namespace std;

class CSymulacja{

    CTura turka;
    void stop_symulacji();
   int przerwanie_symulacji;

public:

    CUzytkownik uz;
    CSymulacja();
    void przeprowadz_symulacje();

};

#endif // SYMULACJA_H
