#ifndef KOLEJKA_PRIO_H
#define KOLEJKA_PRIO_H

#include <iostream>
#include "pakiet.h"
class kolejka_prio
{
private:
    pakiet* glowa=NULL; //wskaznik na pierwszy element w kolejce priorytetowej
    pakiet* ogon=NULL; // wskaznik na ostatni element w kolejce priorytetowej
    int liczba_pakietow; // informuje ile elementow jest w kolejce priorytetowej
public:
    kolejka_prio(); // konstruktor bezparametryczny dla kolejki
    const int &Wez_liczbe_pakietow(); // zwraca ilosc elementow w kolejce
    pakiet* Wez_glowe(); // zwraca wskaznik na glowe kolejki (pierwszy element)
    void Dodaj_do_kolejki (int kolejnosc, std::string wiadomosc); // pozwala dodac element do kolejki priorytetowej
    void Pokaz_pakiet (int liczba); // pozwala zobaczyc wiadomosc X elementu w kolejce
    void Pokaz_pierwszy_pakiet(); // pozwala zobaczyc wiadomosc pierwszego elementu w kolejce
    void Pokaz_ostatni_pakiet(); // pozwala zobaczyc wiadomosc ostatniego elementu w kolejce
    void Wyczysc_kolejke();   // pozwala wyczyscic kolejke

};

std::ostream & operator << (std::ostream & str, kolejka_prio &kolejka); // pozwala na wypisanie kolejki





#endif
