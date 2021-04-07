#ifndef PAKIET_H
#define PAKIET_H

#include<iostream>
#include<string>

class pakiet{
private:
    int numer;    // Numer pakietu, jego miejsce w kolejce priorytetowej
    std::string czesc_wiadomosci; // czesc widomosci w danym pakiecie
    pakiet* nastepny =NULL; // wskaznik na nastepny pakiet, potrzebny do dzialania kolejki priorytetowej;
public:
    const int &Wez_numer(); // Zwraca numer pakietu
    const std::string &Wez_wiadomosc(); // Zwraca czesc wiadomosci
    pakiet* Wez_nastepny(); // zwraca wskaznik na kolejny pakiet
    void Zmien_nastepny(pakiet* wskaznik); // pozwala zmienic wskaznik na kolejny pakiet
    void Zmien_numer(int &liczba); // pozwala zmienic/nadac numer pakietowi
    void Zmien_czesc_wiadomosci(std::string wiad); // pozwala zmienic/nadac czesc wiadomosci pakietowi
};

/*
 * W klasie pakiet sa tylko tzw set'ery i get'ery
 */

std::ostream & operator << (std::ostream & str, pakiet &Element_wiadomosci); // pozwala wczytac pakiet
std::istream & operator >> (std::istream & str, pakiet &Element_wiadomosci); // pozwala wypisac pakiet

#endif
