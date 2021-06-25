#pragma once
#include "obiekt_sceny.h"
#include "cuboid.hh"
#include "graniastoslup.hh"
#include "matrix3d.h"

class Droniarz: public obiekt_sceny{
protected:
    Cuboid korpus;
    Graniastoslup rotory[4];
public:
    Droniarz();
    Droniarz(std::string nazwa_korpusu, std::string nazwa_rotora0,
             std::string nazwa_rotora1, std::string nazwa_rotora2, std::string nazwa_rotora3,
             vector3d srodek, matrix3d orient);
    void translacja(vector3d translacja);
    void obrot(matrix3d macierz_obrotu);
    void szukanie_pozycji();
    Graniastoslup Wez_rotor(int index);
    Cuboid Wez_korpus();
    std::string jaka_przeszkoda() override;
    void obrot_rotorow(matrix3d matrix_rotacji);
};