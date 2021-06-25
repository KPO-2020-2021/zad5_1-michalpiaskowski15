// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.

#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "../tests/doctest/doctest.h"
#endif

#include "exampleConfig.h"
#include "exampleConfig.h.in"
#include "scena.h"

void wyswietl_menu();

int main() {

    scena scenka = scena();
    int wybor;
    int index_przeszkody;
    char wybor_drona;
    double kat, x, y;
    double dlugosc_lotu;
    vector3d pozycja_przeszkody;
    char typ_przeszkody;
    std::string nazwa_przeszkody;
    
    do {
        wyswietl_menu();
        scenka.rysowanie_sceny();
        std::cin >> wybor;
        switch (wybor) {
            case 1: 
                {
                std::cout << "Wybierz drona A lub B" << std::endl;
                std::cin >> wybor_drona;
                    if (wybor_drona == 'A') {
                        scenka.rysowanie_sceny();
                        scenka.ustaw_index(0);
                    } else if (wybor_drona == 'B') {
                        scenka.rysowanie_sceny();
                        scenka.ustaw_index(1);
                    } else { std::cout << "Niewlasciwy wybor drona!!! Wpisz A lub B" << std::endl; }
                break;
                }
            case 2: 
                {
                    std::cout << "Podaj pozycje x:" << std::endl;
                    std::cin >> x;
                    std::cout << "Podaj pozycje y:" << std::endl;
                    std::cin >> y;
                    std::cout << "Podaj typ przeszkody 1/2/3" << std::endl;
                    std::cin >> typ_przeszkody;
                    std::cout << "Podaj nazwe przeszkody " << std::endl;
                    std::cin >> nazwa_przeszkody;
                    scenka.dodaj_przeszkode(x, y, typ_przeszkody,nazwa_przeszkody);
                break;
                }
            case 3: 
                {
                    std::cout << "Podaj indeks przeszkody do usuniecia:\n";
                    std::cin >> index_przeszkody;
                    scenka.usun_przeszkode(index_przeszkody);
                break;
                }
            case 4: 
                {
                    for(int i = 2; i < (int)scenka.wszystkie_przeszkody.size(); ++i)
                    {
                    std::cout << (i-1) <<": "<< scenka.wszystkie_przeszkody[i]->jaka_przeszkoda()
                    << " " << scenka.wszystkie_przeszkody[i]->Wez_srodek() << std::endl;
                    }
                break;
                }
            case 5: 
                {
                    std::cout << "Podaj dlugosc lotu: \n";
                    std::cin >> dlugosc_lotu;
                    std::cout << "Podaj kat, o jaki chcesz obrocic drona: \n";
                    std::cin >> kat;
                    scenka.animcja_lotu(dlugosc_lotu, kat);
                break;
                }
            case 6: 
                {
                    wyswietl_menu();
                break;
                }
            case 7: 
                {
                    std::cout << "Aktualna ilosc wektorow:" << pozycja_przeszkody.zwroc_wektory_aktualnie() << std::endl;
                    std::cout << "Ile bylo wektorow w ogole:" << pozycja_przeszkody.zwroc_wektory_wogole() << std::endl;
                break;
                }
            case 8: 
                {break;}
            default: 
                {break;}
        }

    } while (wybor != 8);
}


void wyswietl_menu(){
    std::cout << "***********MENU PROGRAMU DRON*************" << std::endl;
    std::cout << "Dostepne opcje:" << std::endl;
    std::cout << "  1) Wybor drona" << std::endl;
    std::cout << "  2) Dodaj przeszkode" << std::endl;
    std::cout << "  3) Usun przeszkode" << std::endl;
    std::cout << "  4) Wyswietl liste przeszkod" << std::endl;
    std::cout << "  5) Podaj parametry przelotu" << std::endl;
    std::cout << "  6) Wyswietl menu" << std::endl;
    std::cout << "  7) Wyswietl ilosc wektorow" << std::endl;
    std::cout << "  8) Koniec dzialania programu" << std::endl;
    std::cout << std::endl;
    std::cout << "Wybierz opcje:" << std::endl;
}
