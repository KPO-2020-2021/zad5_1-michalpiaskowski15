#pragma once
#include "obiekt_sceny.h"

class Przeszkoda1: public obiekt_sceny{
public:
    Przeszkoda1(vector3d pozycja, std::string wczytanie_przeszkoda1, std::string zapis_przeszkoda1, vector3d _skala);
    void czyt_wierzcholki_z_pliku() override;
    void szukanie_pozycji() override;
    std::string jaka_przeszkoda() override;
};