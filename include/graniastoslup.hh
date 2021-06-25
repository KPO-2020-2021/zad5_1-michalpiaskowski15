#pragma once

#include "matrix.hh"
#include "vector.hh"
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include "obiekt_sceny.h"

class Graniastoslup: public obiekt_sceny {
protected:
    vector3d wierzcholki[12];
public:
    Graniastoslup();
    Graniastoslup(vector3d pozycja, std::string zapis_graniastoslup, matrix3d orientacja);
    void rotacja(matrix3d macierz_rotacji);
    void translacja(vector3d tmp);
    void czyt_wierzcholki_z_pliku();
    void szukanie_pozycji(vector3d pozycja_korpusu);
    friend std::ostream & operator <<(std::ostream & x, Graniastoslup &objekt);
    const vector3d & operator[](int index) const;
    vector3d & operator[](int indeks);
    void ustaw_pozycje(vector3d pozycja);
};


