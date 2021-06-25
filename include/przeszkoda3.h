#pragma once
#include "obiekt_sceny.h"

class Przeszkoda3: public obiekt_sceny{
public:
    Przeszkoda3(vector3d pozycja, std::string wczytanie_przeszkoda3, std::string zapis_przeszkoda3, vector3d _skala);
    void czyt_wierzcholki_z_pliku() override;
    void szukanie_pozycji() override;
    std::string jaka_przeszkoda() override;
};
