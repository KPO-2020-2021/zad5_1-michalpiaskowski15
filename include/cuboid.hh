#pragma once
#include "obiekt_sceny.h"
#include "matrix3d.h"

class Cuboid: public obiekt_sceny{
protected:
    vector3d _wierzcholki[8];
public:
    Cuboid();
    Cuboid(vector3d pozycja, std::string zapis_cuboid, matrix3d orientacja);
    void czyt_wierzcholki_z_pliku();
    void szukanie_pozycji();
    void przesuniecie_o_wektor(vector3d translacja);
    void rotacja(matrix3d macierz_obrotu);
    friend std::ostream & operator <<(std::ostream & x, Cuboid &cuboid);
    const vector3d & operator[](int index) const;
    vector3d & operator[](int indeks);
};