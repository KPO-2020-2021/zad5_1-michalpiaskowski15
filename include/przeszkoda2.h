#pragma once
#include "obiekt_sceny.h"

class Przeszkoda2: public obiekt_sceny{
public:
    Przeszkoda2(vector3d pozycja, std::string wczytanie_przeszkoda2, std::string zapis_przeszkoda2, vector3d _skala);
    void czyt_wierzcholki_z_pliku() override;
    void szukanie_pozycji() override;
    std::string jaka_przeszkoda() override;
};