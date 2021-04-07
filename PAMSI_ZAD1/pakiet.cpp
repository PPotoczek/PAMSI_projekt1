#include "pakiet.h"

const int &pakiet::Wez_numer()
{
    return numer;
}

const std::string &pakiet::Wez_wiadomosc()
{
    return czesc_wiadomosci;
}

void pakiet::Zmien_numer(int &liczba)
{
    numer = liczba;
}

void pakiet::Zmien_czesc_wiadomosci(std::string wiad)
{
    czesc_wiadomosci = wiad;
}

pakiet *pakiet::Wez_nastepny()
{
    return nastepny;
}

void pakiet::Zmien_nastepny(pakiet *wskaznik)
{
    nastepny = wskaznik;
}

std::ostream & operator << (std::ostream & str, pakiet &Element_wiadomosci)
{
    std::string temp_string;
    temp_string = Element_wiadomosci.Wez_wiadomosc();           //wypisuje tylko wiadomosc
    str << temp_string;
    return str;
}

std::istream & operator >> (std::istream & str, pakiet &Element_wiadomosci)
{
    int temp_int;
    std::string temp_string;
    str >> temp_int;
    Element_wiadomosci.Zmien_numer(temp_int);
    str >> temp_string;
    Element_wiadomosci.Zmien_czesc_wiadomosci(temp_string);
    return str;
}

