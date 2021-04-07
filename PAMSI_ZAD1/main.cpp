#include <iostream>
#include <string>
#include "pakiet.h"
#include "kolejka_prio.h"

int main()
{
    /*
     * Do programu zrobilem interfejs uzytkownika
     * Jako uzytkownik mozemy wlaczyc rozwiazanie zadania 3 lub mozemy wlaczyc sama kolejke (driver do struktury)
     */

    kolejka_prio kolejka;
    char wybor;
    int priorytet;
    int liczba_pakietow;
    std::string wiadomosc;
    int zmienna_pom;
    int liczba;
    for (;;)
    {
        kolejka.Wyczysc_kolejke();
        std::cout << "====MENU====" << std::endl;
        std::cout << "1 - Rozwiazanie zadania 3\n" << "2 - opcje kolejki\n" << "q - Wyjscie\n";
        std::cin >> wybor;
        switch (wybor)
        {
            case '1':
            {
                std::cout << "Podaj liczbe pakietow do wczytania\n";
                std::cin >> liczba_pakietow;
                std::cout << "Wczytaj pakiety. Najpierw podaj priorytet, nastepnie podaj wiadomosc pakietu\n";
                while (liczba_pakietow > 0)
                {
                    std::cin >> priorytet;
                    std::cin >> wiadomosc;
                    kolejka.Dodaj_do_kolejki(priorytet, wiadomosc);
                    liczba_pakietow--;
                }
                std::cout << "========== CALA WIADOMOSC ============\n";
                std::cout << kolejka << std::endl;
                break;
            }
            case '2':
            {
                zmienna_pom = 1;
                while (zmienna_pom > 0)
                {
                    char wybor2;
                    std::cout << "==MENU==" << std::endl;
                    std::cout << "1 - Wczytaj pakiet i dodaj go do kolejki\n" << "2 - Wyswietl X pakiet w kolejce\n" << "3 - Wyswietl pierwszy pakiet w kolejce\n" << "4 - Wyswietl ostatni pakiet w kolejce\n" << "5 - Wyswiel wiadomosc\n"<< "q - Wyjscie\n";
                    std::cin >> wybor2;
                    switch (wybor2)
                    {
                        case '1': {
                            std::cout << "Najpierw podaj priorytet, pozniej wiadomosc\n";
                            std::cin >> priorytet;
                            std::cin >> wiadomosc;
                            kolejka.Dodaj_do_kolejki(priorytet, wiadomosc);
                            break;
                        }
                        case '2':
                        {
                            std::cout << "Podaj pozycje pakietu\n";
                            std::cin >> liczba;
                            kolejka.Pokaz_pakiet(liczba);
                            break;
                        }
                        case '3':
                        {
                            kolejka.Pokaz_pierwszy_pakiet();
                            break;
                        }
                        case '4':
                        {
                            kolejka.Pokaz_ostatni_pakiet();
                            break;
                        }
                        case '5':
                        {
                            std::cout << "=====CALA WIADOMOSC======\n";
                            std::cout << kolejka << std::endl;
                            break;
                        }
                        case 'q':
                        {
                            zmienna_pom = 0;
                            break;
                        }
                        default:
                        {
                            std::cout << "Zla komenda sproboj ponownie" << std::endl;
                            break;
                        }
                    }
                }
                break;
            }
            case 'q':
            {
                return 0;
                break;
            }
            default:
            {
                std::cout << "Zla komenda sproboj ponownie" << std::endl;
                break;
            }
        }
    }
}