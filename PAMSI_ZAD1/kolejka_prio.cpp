#include "kolejka_prio.h"

kolejka_prio::kolejka_prio()
{
    glowa=NULL;
    liczba_pakietow =0;
}

const int &kolejka_prio::Wez_liczbe_pakietow()
{
    return liczba_pakietow;
}

pakiet *kolejka_prio::Wez_glowe()
{
    return glowa;
}

void kolejka_prio::Dodaj_do_kolejki(int kolejnosc, std::string wiadomosc)
{
    pakiet *nowy_element;
    nowy_element = new pakiet;   //dynamiczne lokowanie pamieci
    nowy_element->Zmien_numer(kolejnosc); //tworze nowy pakiet z podanych danych
    nowy_element->Zmien_czesc_wiadomosci(wiadomosc);
    nowy_element->Zmien_nastepny(NULL);
    int zm_pom_liczba_elementow = liczba_pakietow;  //bedzie potrzebne do wlaczenia petli while
    pakiet* zmienna_pomocnicza;
    pakiet* zmienna_poprzednia_do_zmiennej_pomocniczej;         // zmienne potrzebne do przechodzenia po elementach i patrzenia czy wczytywany element znajduje sie pomiedzy nimi
    pakiet* zmienna_pomocnicza_do_ogona;
    if (glowa == NULL)              //jezeli kolejka pusta to element automatycznie jest pierwszy i ostatni
    {
        glowa = nowy_element;
        ogon = nowy_element;
        liczba_pakietow++;
    }
    else if(liczba_pakietow == 1)  //jezeli w kolejce jest jeden element to drugi element moze byc albo za nim albo przed nim
    {
        if(glowa->Wez_numer() == nowy_element->Wez_numer())
        {
            std::cerr << "Blad. Dwa rozne pakiety nie moga miec tego samego numeru" << std::endl;
            exit(1);
        }

        if(glowa->Wez_numer()>nowy_element->Wez_numer())
        {
            zmienna_pomocnicza = glowa;
            glowa = nowy_element;
            glowa->Zmien_nastepny(zmienna_pomocnicza);
            ogon = zmienna_pomocnicza;
            liczba_pakietow++;
        }
        else
        {
            glowa->Zmien_nastepny(nowy_element);
            ogon = nowy_element;
            liczba_pakietow++;
        }
    }
    else if(liczba_pakietow>=2) //jezeli jest wiecej niz dwa elementy to nowy element moze znajdowac sie pomiedzy dwoma elementami
    {

        zmienna_pomocnicza = glowa->Wez_nastepny();   //ustawiam zmienne
        zmienna_poprzednia_do_zmiennej_pomocniczej = glowa;
        zmienna_pomocnicza_do_ogona = ogon;
        while (zm_pom_liczba_elementow > 0) //przegladam cala kolejke i patrze w ktorym miejsu wstawic nowy element
        {
            if(zmienna_pomocnicza->Wez_numer() == nowy_element->Wez_numer() || zmienna_poprzednia_do_zmiennej_pomocniczej->Wez_numer() == nowy_element->Wez_numer())  //jezeli dwa elementy maja ten sam priorytet to z tresci zadania wynia ze jest to blad
            {
                std::cerr << "Blad. Dwa rozne pakiety nie moga miec tego samego numeru" << std::endl;
                exit(1);
            }
            if(zmienna_poprzednia_do_zmiennej_pomocniczej->Wez_numer() > nowy_element->Wez_numer())  //jezeli element ma wiekszy priorytet niz pierwszy element to ten element staje sie pierwszym elementem (glowa)
            {
                glowa = nowy_element;
                glowa->Zmien_nastepny(zmienna_poprzednia_do_zmiennej_pomocniczej);
                break;
            }
            if(ogon->Wez_numer() < nowy_element->Wez_numer()) //jezeli element ma mniejszy priorytet od ostatniego elementu to automatycznie zostaje ostatnim elementem (ogon)
            {
                zmienna_pomocnicza_do_ogona->Zmien_nastepny(nowy_element);
                ogon = nowy_element;
                break;
            }
            if(zmienna_poprzednia_do_zmiennej_pomocniczej->Wez_numer() < nowy_element->Wez_numer() && nowy_element->Wez_numer() < zmienna_pomocnicza->Wez_numer()) //  tutaj sprawdzam dwa elementy i patrze czy nowy element ma priorytet pomiedzy tymi dwoma co wlasnie sprawdzam
            {
                zmienna_poprzednia_do_zmiennej_pomocniczej->Zmien_nastepny(nowy_element);                                                                          // i tak po kolei przechodze zmieniajac te dwa elementy na kolejne
                nowy_element->Zmien_nastepny(zmienna_pomocnicza);
                break;
            }
            zmienna_poprzednia_do_zmiennej_pomocniczej = zmienna_pomocnicza;
            zmienna_pomocnicza= zmienna_pomocnicza->Wez_nastepny();
            zm_pom_liczba_elementow--;
        }
        liczba_pakietow++;
    }                                               //oczywiscie za kazdym razem jak element zostaje wczytany to zwieksza sie liczba wszystkich pakietow w kolejce
}

void kolejka_prio::Pokaz_pakiet(int liczba)
{
    pakiet* zm_pom = glowa;
    if(liczba<1 || liczba > liczba_pakietow)     // Sprawdzam czy podano wlasciwa liczbe bo nie ma takiego elementu jak np -1 oraz liczba nie moze byc wieksza niz ilosc wszystkich elementow
    {                                             // bo nie pokaze elementu np 26 jak w kolejce jest 20 elementow.
        std::cerr << "Blad. Podana niepoprawna wartosc" << std::endl;
        exit(1);
    }
    while (liczba>1)   // Jezeli podano poprawnie liczbe to teraz przeszukuje tablice az dojde do tego elementu
    {
        zm_pom = zm_pom->Wez_nastepny();
        liczba--;
    }
    std::cout << zm_pom->Wez_numer() << std::endl << zm_pom->Wez_wiadomosc() << std::endl;  // kiedy juz go znajde to wyswietlam jego priorytet/ nadany mu numer pakitu oraz jego czesc wiadomosci
}

void kolejka_prio::Pokaz_pierwszy_pakiet()
{
    std::cout << glowa->Wez_numer() << std::endl << glowa->Wez_wiadomosc() << std::endl;  //to co wyzej tylko ze od razu wypisuje pierwszy element (glowe)
}

void kolejka_prio::Pokaz_ostatni_pakiet()
{
    std::cout << ogon->Wez_numer() << std::endl<< ogon->Wez_wiadomosc() << std::endl; // to co wyzej tylko ze od razu wypisuje ostatni element (ogon)
}

void kolejka_prio::Wyczysc_kolejke()
{
    pakiet* zm_pomocnicza;
    while(liczba_pakietow>0)    //robie petle do momentu do poki sa w niej elementy
    {
        zm_pomocnicza = glowa->Wez_nastepny();  // usawiam zmienna pomocnicza na kolejny element
        free (glowa); // zwalniam pamiec od pierwszego elementu
        glowa = zm_pomocnicza; // teraz drugi element jest pierwszy, kolejka przesunela sie o jeden do przodu
        liczba_pakietow--;
    }
    ogon = NULL; // ustawiam ogon na NULL
}

std::ostream &operator<<(std::ostream &str, kolejka_prio &kolejka)
{
    pakiet* zm_pom = kolejka.Wez_glowe();
    for(int i=0;i<kolejka.Wez_liczbe_pakietow();i++)
    {
        std::cout << zm_pom->Wez_wiadomosc();     // wypisuje tylko wiadomosc
        zm_pom = zm_pom->Wez_nastepny();
    }
    return str;
}
