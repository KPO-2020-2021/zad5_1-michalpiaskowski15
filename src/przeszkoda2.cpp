#include "przeszkoda2.h"

Przeszkoda2::Przeszkoda2(vector3d pozycja, std::string wczytanie_przeszkoda2, std::string zapis_przeszkoda2, vector3d _skala)
{
    this->orientacja = matrix3d();
    this->srodek = pozycja;
    this->czyt_wierzcholki = wczytanie_przeszkoda2;
    this->zapis_wierzcholkow = zapis_przeszkoda2;
    this->skala = _skala;

}


void Przeszkoda2::czyt_wierzcholki_z_pliku()
{

    std::ifstream plik;
    std::string tmp;
    std::stringstream strumien_pomocniczy;
    int i = 0;
    plik.open(this->czyt_wierzcholki);

    while (getline(plik,tmp)){
        strumien_pomocniczy << tmp;
        strumien_pomocniczy >> this->wierzcholki[i];
        i++;
        strumien_pomocniczy = std::stringstream();
    }
    plik.close();
}
/**
 * @brief Szukanie pozycji przeszkoda
 * 
 */
void Przeszkoda2::szukanie_pozycji()
{
    czyt_wierzcholki_z_pliku();
    for (int i = 0; i < 8; ++i){
        this->wierzcholki[i] = this->orientacja * (this->wierzcholki[i]);
    }
    for (int i = 0; i < 8; ++i){
        this->wierzcholki[i] = this->srodek + this->wierzcholki[i];
    }
}

std::string Przeszkoda2::jaka_przeszkoda()
{
    return std::string("przeszkoda2");
}


